# fall-2024-cop-3223--assignment1
Assignment 1 
Overview
In this assignment, you will write a program that will house many internal functions. Instead of typing everything within main(), you will create functions with different responsibilities to start ”fracturing” your code. Fracture, in this case, is not meant to be a negative term. Think of it like this, when there’s a fracture in something, one must understand how it came to be, isolate said problem, and work on it without the bias of external factors. For those eager to pursue Software engineering (or SWE for short), you will learn to construct programs that does not overwhelm itself. There’s a rule of thumb that says 50 lines per function (no more than that) but there’s an even better way of describing this:

• Avoid giving a function anxiety for all the stuff it has to do. Or in otherwords, DRY.

DRY stands for ”Don’t Repeat Yourself” and is meant to minimize redundancy by ensuring that any piece of knowledge or logic is represented in a single, unambiguous place within the system.

If you do end up pursuing a career in SWE, you must be able to process technical documentation and work with new environments or languages. This will beessential to your career and this assignment will provide you with an exercise in doing just that.

Program Organization and Requirements
In this assignment, you are going to implement 5 user defined functions. Please follow the PDF that is associated with your repo.

Testing on Codespaces
It is your responsibility to test your code on Codespaces. If you submit your assignment without testing on Codespaces, you risk points being deducted for things that may behave differently on your operating system. Remember, you cannot dispute grades if your code didn’t work properly on Codespaces all because it worked on your machine. The Codespaces environment gives the final say. Plan accordingly to test on Codespaces!!

Info

If you are making use of one of the library functions in the math.h library, you need to modify your compile command to add lm to the end of it. Therefore, your compile command would look like the following: gcc -o program program_firstname_lastname.c -lm.

Collaboration Log & Online Sources
You are required to turn in a collaboration log for this assignment. This log explains the students (and AI Assistants) that you chatted with while completing the assignment. This collaboration log can simply state "I did not collaborate with anyone on this assignment", or it should stipulate the person you worked with and what type of acceptable discussion took place.

Click Here to Download the Collaboration Log Template
Clarification about online sources: It is fine to use Google and other sites to look for snippets of publicly available code that might help you with assignments, and it is okay to use a limited amount of such code in your own work. You should not take entire solutions or large amounts of code from the web. And you must clearly comment your code to indicate which code and ideas are purely your own, which code or ideas are borrowed or adapted from elsewhere, and where the other code or ideas came from.

Some General Advice for Programming Assignments
Here’s some general advice that might serve you well in this and future assignments in any course:

In general, it is ideal to code in short bursts and review your changes early before waiting too long. Example, you check after the completion of a short function or after a few lines in a complex function. The idea is to make sure you are progressively succeeding rather than progressively failing.

You’re bound to encounter errors in your code at some point. Use printf() statements to verify that your code is producing the results you think it should be producing (rather than making assumptions that certain compo- nents are working as intended). You should get in the habit of not trusting your own code and using printf() to provide yourself with evidence that your code does what you think it does.

You will eventually want to read up on how to set break points and use a debugger. Some helpful Google queries might be: CodeBlocks debugger and gdb debugging tutorial.

Submission instructions
Submit your Assignment through Webcourses. You will need to submit the following files to receive full credit:

Your .c file that contains your code, named in the proper format specified above.
Your collaboration log stipulating the students and AI assistants that you chatted with in completing the assignment.
Click Here to Access Webcourses to Turn in the Assignment
Grading Rubric
The grading for this project will be broken down as follows:

Part One: Function for calculating width - (10 points total)
Part Two: Function for Calculating Height - (10 points total)
Part Three: Function for Calculating Distance - (20 points total)
Part Four: Function for Calculating Area - (20 points total)
Part Five: Function for Calculating Perimeter - (20 points total)
Part Six: Implementation Details - (10 points total)
Coding Style & Comments - (10 points total) - Check out the C Style Guide for more info.
