**_Introduction:_**

Inbuilt functions used:
Fgetc: which gets the character the pointer is pointing at. 
Stdout: which prints the character ‘c’ given to it. 
fclose : closed the file 

_**Objectives: **_

We had to perform 5 tasks, first was to get two user input on cmd (name of the file and a lower case alphabet), second was to check if the user has the correct input or not, third was to print the file line by line, fourth was to replace the occurrence of the character provided by the user immediately after it in alphabetical sequence.  

**_Methodology:_**

First, we would create a text file which would have 4 lines such as: 
“Hello friends!
This is compiler construction lab.
C programming is real fun
Have a nice day”
We give two arguments in the command line. First one is file and the second one is the character that needs to be replaced. The file is read line by line. The lines are printed on the command prompt. We have a char variable called string which stores each line of the file inside and then that is printed on the stdout. When we are iterating over each line, we count the number of characters in each line and print that number at the end of each line. For counting number of characters, we use int variable called num_char. Lastly we iterate over each character again and if it matches with the character provided by the user than it is replaced by the immediate next character. For this method we used ASCII codes to print the next character. We add a 1 to our character. 
