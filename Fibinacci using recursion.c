#include <stdio.h>

int fibonacci(int number)
{
    if (number==0){
        return 0;
    }
    else if(number==1){
        return 1;
    }
    else {
        return fibonacci(number-1)+fibonacci(number-2);
    }
}

int main()
{
    int number,loop;

    printf("Fibonacci of :");
    scanf("%d",&number);

    for(loop=0;loop<number;loop++){
        printf("%d  ",fibonacci(loop));
    }
}
