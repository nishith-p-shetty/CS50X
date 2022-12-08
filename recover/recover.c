#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define BLOCK_SIZE 512 //block size

int main(int argc, char *argv[])
{
    FILE *raw_file = fopen(argv[1], "r");    //open raw file
    if (raw_file == NULL)                    //not found
    {
        printf("Could not open card.raw.\n");
        return 1;
    }

    unsigned char store[BLOCK_SIZE];         //reading raw file
    int fc = 0;                             //count no of files
    bool imgfo = false;                     //image found/not

    FILE *img = NULL;                       //image

    while (fread(store, 1, BLOCK_SIZE, raw_file) == BLOCK_SIZE)
    {
        //check if jpg starts
        if (store[0] == 0xff && store[1] == 0xd8 && store[2] == 0xff && store[3] == 0xe0)
        {
            if (imgfo)
            {
                fclose(img);            //close not found
            }
            else
            {
                imgfo = true;           //found
            }

            char fname[8];
            sprintf(fname, "%03d.jpg", fc);         //file name
            img = fopen(fname, "a");                //open image
            fc++;
        }

        if (imgfo)
        {
            fwrite(&store, BLOCK_SIZE, 1, img);         //write image
        }
    }
    fclose(raw_file);                   //close
    fclose(img);                        //close
    return 0;
}