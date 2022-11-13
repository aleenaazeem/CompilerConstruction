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
{  if (argc != 2)
    { printf("Invalid Arguments \n");
      exit(0);
    }
    myptr = fopen(argv[1],"r"); //opening my file to read
    
    if (myptr == NULL){
     printf("Error! Pointer has gone rogue");
     }
     
     while (fgets(string,sizeof(string),myptr) != NULL){
     count_line = count_line + 1;
     printf("%d. ",count_line);
     fputs(string,stdout);
     
     }
     fclose(myptr); 
     count_line = 0;
     myptr = fopen(argv[1],"r"); //opening my file to read
     while (fgets(string,sizeof(string),myptr) != NULL){
        count_line = count_line +1;
       for (int i = 0; i < strlen(string); i++){
          if (string[i] == '/' && string[i+1] == '/')
         {
        printf("\nLine Number: %d     A double slash comment found\n",count_line);
        }
     
       }
       }
     
      
}
