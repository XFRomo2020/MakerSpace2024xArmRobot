# MakerSpace2024xArmRobot

## Introduction
This repository contains code for controlling an xARM robot.

## Overall Process
Each student has a folder with thier name. All of the work by a specific student needs to be in their folder. Once a student has receieved confirmation from the other two students, that they have tested and approved a specific program, it can be moved to the **Final** folder.

## Git Process
The process of using git is the following:
1. Edit files for a period of time or to a specific working condition.
2. `git add -A` to **stage** the changed files to git
3. `git commit -m "description of changes` to **commit** the changes to git
4. `git push` to **push** the files upto the github repository

If you want to see some of the changes made by other students, you will need to *fetch and merge* those changes:

1. `git fetch` - will *fetch* or download the latest changes in the *GitHub* repository
2. `git merge` - will *merge* the changes into the repository on your computer

#Troubleshooting

##Python
TBD
##Arduino
    After setting up the IDE and making sure you can communicate to your Arduino and making sure your Arduino can communicate to your xArm Robot, you find you cannot replicate your process. Here are some things that can cause this.
###Serial Wires are hooked up wrong
    This is most likely to occur during the setting of the input(tx) and output(rx) incorrectly.
###Early `return;` in `setup()` or `loop()`
    In the process of prototyping a function, you may find a stray `return;` in you 'staging' function, causing the program to ignore parts of your function. In my case, a `return;` was accidentally put in place after my movement array(an attempt to clean up my code with perfunctory 'void' functions) and it was called after initializing them, terminating the setup() function early, thus never actually executing the SetPosition function.
