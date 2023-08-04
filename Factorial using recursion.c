#include <stdio.h>

int factorial(int number)
{
    if(number==0){
        return 1;
    }
    else{
        return(number*factorial(number-1));
    }
}

int main()
{
    int number;
    int result;

    printf("Enter a positive integer : ");
    scanf("%d",&number);

    result=factorial(number);
    printf("Factorial of %d is %d\n",number,result);

    return 0;
}
