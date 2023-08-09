#include <stdio.h>
int main()
{
     FILE *fp;
     char c;

     fp= fopen ("expression.txt", "r"); //opening the file in read mode
    
     while(1) //used infinite loop
     {
        c = fgetc(fp);
        if(c==EOF) 
            break; //but at the End Of File the loop will break
        else
            printf("%c", c);  //either it will print texts from the file
     }
     fclose(fp);
     return 0;
}