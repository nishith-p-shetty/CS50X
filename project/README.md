# CS50XBLOG
#### Video Demo:  <https://youtu.be/FGCagc64PZ4>
#### Description:
**Hello**, My name is Nishith P Shetty & this is my CS50X final project, **CS50X Blog**.

**About** This is a blogging wesbite made with python and flask as backend. This also uses bootstrap templates and css for my projet to make it look good, and also uses sqlite3 for database for storin data of posts and contact information.

**Admin** There is a admin pannel which uses sessions to authenticate admin, where admin can add posts, delete posts, edit posts.

It also has a contact me page where visitors can fill their details.The same information is added to database and notificaton sent to admin email and the response is sent to visitor visitor mail address.

The file app.py hosta the core of this project as backend, and also manages database connections and process.
the templates folder contains all the required HTMl files.

The static folder containes all the static files such as images, css, java script. etc.

The requirements file consists of the pip packages which are necessary to run this application.

**Preview**You can find the project working live at https://nps-blog.herokuapp.com/

**Usablity** Just copy the files ang edit some configurations, and you are good to go to host your own blogging website.

**Features**
- The content can be HTML also
- You can add Banner
- Admin control pannel helps in controlling of webite
- database can be portable
- Fast and Flexible
- All post summary on dashboard
- Secure
- Lightweight
- Professional design

**Reasons to use**
The build is very simple, and anyone with little to no knowledge can undarstand. Lightweight can be deployed easily.

#### Files & Folder Description:
**/static** contains all the static assets of the website, like css, javasctipts, background images.

**app.py** contains the main code required to run the backend to route all paths, controll all database functions.

**clean_blog.sql** This contais the SQL code to create the database.

**clean_blog.db** This contains alll the data of the website, like posts information, contacts information.

**config.json** This file contains the important configurations of the bloging site. All the information here is used by app.py to customize yout website.

**requirements.txt** This contains all the required pip modules whch is used in this project.

**/templates** contains all the HTML files.

**layout.html** This is a template file which contains heades, footer, navbar, etc. components of the website.

**index.html** The main page of website, which shows the set posts limit.

**about.html** This contains the information of about me page of your site.

**help.html** This contains the help information of this page to get admin access, usage of this site, etc.

**contact.html** This contains the details to contact the admin, and also contais the form, where visitior can fill the required details.

**edit.html** This is used to add posts or edit the post after it is posted.

**dashboard.html** This is the admin control pannel dashboard, which shows all the summary of your posts, control buttons to add posts, delelte posts, edit posts, logout, etc.

**login.html** The main page to authenticate to admin pannel, which gives access to dashboard.

**post.html** This is used to show the post which are posted by using their slug.

#### Installation
* run pip install requirments.txt
* fill your details in config.json file
* import clean_blog.sql to your mysql server
* or sqlite3 clean_blog.db
* .read clean_blog.sql
* then run python main.py

<------------------------------------END------------------------------------>