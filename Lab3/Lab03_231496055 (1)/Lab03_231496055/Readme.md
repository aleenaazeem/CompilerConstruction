_**Methodology** _
We had to read and write from three files. Files were input1, input2, input3.  First we take input from the user. He will provide commands
gcc lab03.c -o lab3
./lab3 in1 in2 in3  (These are 4 arguments)
The arguments are 4 and if less or more are provided then an error is thrown. We use a pointer to point to our text file (input1) . We remove extra lines. We use a counter to track if there is only one character and that is ‘\n’ we move on(continue) to the next character (meaning next line). After removing spaces between lines we write those lines in input file 2. 
Input file in1

Hello friends! 

This is compiler construction lab.

C programming is real fun. 

Have a nice day

File in2 without blank lines:

Hello friends! 
This is compiler construction lab. 
C programming is real fun. 
Have a nice day.

The we use pointers to point to input file 2. We read it character by character and when we encounter “\n” we move to the next character and print ‘\n’ and print num_line (which is an integer variable to count the number of lines). This way we write numbered file (input file 3).
File in3 without blank lines and line number:
1. Hello friends! 
2. This is compiler construction lab. 
3. C programming is real fun. 
4. Have a nice day

OUTPUT
![image](https://user-images.githubusercontent.com/99934126/201190689-f9fa177e-2f3b-434e-8796-b9136cee4f97.png)

