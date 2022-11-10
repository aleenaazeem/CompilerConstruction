#include<stdlib.h>
#include<string.h>
#include<stdio.h>
char string[1000]; // string stored inside
char c;
FILE *myptr; // pointer to my file
int num_char = 0; //counts characters in each line
int count_line = 0; //counts the number of line
int i = 0;
int main(int argc,char *argv[]) 
{  if (argc != 3)
    { printf("Invalid Arguments \n");
      exit(0);
    }
    //printf("%s",argv[1]);
    myptr = fopen(argv[1],"r"); //opening my file to read
    
    if (myptr == NULL){
     printf("Error! Pointer has gone rogue");
     }
     
     while(fgets(string,sizeof(string),myptr) != NULL){
     fputs(string,stdout);}
     fclose(myptr); 
     myptr = fopen(argv[1],"r"); //opening my file to read
     char *letter = argv[2]; // here we want to work on argv[2] being equal the letter
     while ((c= fgetc(myptr)) !=EOF)
      {   
         if (c == *letter)
         {
           c = c+1 ;  
           }
        num_char = num_char +1 ;
        if (c == '\n'){
          printf(" [%d]", num_char-1);
          num_char = 0;
          }
        fputc(c,stdout);
      }
     
     fclose(myptr); // closing the pointer
     
}
