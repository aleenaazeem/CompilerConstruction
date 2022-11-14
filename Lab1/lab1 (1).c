#include<stdlib.h>
#include<string.h>
#include<stdio.h>
char string[1000]; // string stored inside
int arr[10]; //creating an array to store lengths of each line
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
    //printf("%s",argv[1]);
    myptr = fopen(argv[1],"r"); //opening my file to read
    
    if (myptr == NULL){
     printf("Error! Pointer has gone rogue");
     }
     // printing the file character by character
     while((c= fgetc(myptr)) !=EOF){
     fputc(c,stdout);}
     fclose(myptr); 
     
     //counting characters of the file
     myptr = fopen(argv[1],"r"); //opening my file to read
     int i = 0;
      while ((c= fgetc(myptr)) !=EOF)
      {   
         if (c != '\n' && c != ' ')
         {
           num_char = num_char + 1 ;  
           }
          if (c == '\n'){
           //this part will count the line
          count_line = count_line + 1;
          arr[i] = num_char;
          //printf("%d on line %d\n",arr[i],i);
          num_char = 0;
          i = i + 1;
         }
      }
     //printf("The number of characters are: %d ",num_char);
     fclose(myptr); // closing the pointer
     int max = 0;
     for (int j =0; j < sizeof(arr);j++)
     { 
       if(max < arr[j])
       { 
         max = arr[j];
       }
     }
     for (int j =0; j < sizeof(arr);j++)
     { 
       if(max == arr[j])
       { 
         printf("Longest line of file is: %d",j+1);
       }
     }
     printf(" having %d characters.",max);
}
