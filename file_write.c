#include<stdio.h>  
#include<conio.h>  
void main(){  
FILE *fp;  
system("cls");  
  
fp=fopen("expression.txt","a+");  //name of the file to write
                                 //a+ mode is used for append
fputs("\nC*(A+B)-E",fp);  // Inside double quotation (" ") will be written in the file
  
fclose(fp);  
getch(); 
}