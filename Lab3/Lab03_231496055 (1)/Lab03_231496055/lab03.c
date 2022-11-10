#include<stdlib.h>
#include<string.h>
#include<stdio.h>
char c;
FILE *myptr; // pointer to my file
FILE *ptr2;
int num_line = 1;
int main(int argc,char *argv[])
{
   if(argc != 4)
   {
      printf("Need to have a file name in the arguments of this program\n");
      exit(0);
   }
   myptr = fopen(argv[1],"r"); //opening file in1
   if (myptr == NULL){ // if pointer doesnt point to anything then give error
     printf("Error! Pointer has gone rogue");
     }
    while ((c= fgetc(myptr)) !=EOF) // read my file character by character
      {fputc(c,stdout);}
    fclose(myptr);
    // point 2 of lab3
    myptr = fopen(argv[1],"r"); //opening file in1
    ptr2 = fopen(argv[2],"w"); // writing in in2
    int count = 0; // this counts if space is encountered
    while ((c= fgetc(myptr)) !=EOF) // read my file character by character
      { 
      count ++;
      if (c == '\n' && count == 1)
      { count = 0;
        continue; 
      }
      fputc(c,ptr2); // saving the file in in2
      if (c=='\n'){
       count = 0;
       }
      }
      fclose(myptr);
      fclose(ptr2);   
      // display the in2 file on the console
      myptr = fopen(argv[2],"r"); //opening file in2
      while ((c= fgetc(myptr)) !=EOF) // read my file character by character
      {fputc(c,stdout);}
    fclose(myptr);
   
    myptr = fopen(argv[2],"r"); //opening file in2
    ptr2 = fopen(argv[3],"w");
    fprintf(ptr2, "%d. ",num_line);
    //printf("%d. ",num_line); // writing the number of first line
    while ((c= fgetc(myptr)) !=EOF)
      { 
          if (c == '\n' && num_line<4){
          //c= fgetc(myptr); //onto next character 
          //fputc('\n',ptr2);
          num_line = num_line + 1;
          fprintf(ptr2, " \n%d. ",num_line);
          continue; 
          //fputc(num_line,ptr2);
          //fputc(c,stdout);
          }
        fputc(c,ptr2);
      }
    fclose(ptr2); 
    fclose(myptr);
    // we print in3 on console
    myptr = fopen(argv[3],"r"); //opening file in3
    while ((c= fgetc(myptr)) !=EOF)
      { 
        fputc(c,stdout);
      }
    fclose(myptr);
   return 0;
}
