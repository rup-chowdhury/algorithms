#include <stdio.h>

int main()
{
    int array[20], element_number, loop1, loop2,loop3,loop4,swap;
    //Using array variable to store the elements which will be taken from the user

    printf("Enter number of elements\n");
    scanf("%d", &element_number);
    //Taking input from user for element numbers

    printf("Enter %d elements: \n", element_number);

    for (loop1 = 0; loop1 < element_number; loop1++)
        scanf("%d", &array[loop1]);
    //Taking elements from the user using loop1
    for (loop1 = 0 ; loop1 < element_number - 1; loop1++){
        printf("\nRound %d : ",loop1+1);
        for (loop2 = 0 ; loop2 < element_number - loop1 - 1; loop2++){
            if (array[loop2] > array[loop2+1]){
            printf("\n");
                swap = array[loop2];
                array[loop2]   = array[loop2+1];
            printf("\nSwap : %d\n",array[loop2+1]);
                array[loop2+1] = swap;
        for (loop3 = 0; loop3 < element_number; loop3++){
        printf("%d  ", array[loop3]);
                }
            }
        }
    }

    return 0;
}
