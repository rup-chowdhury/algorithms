#include <stdio.h>
int main()
{
    int array[20], element_number, loop1, loop2,loop3, position, swap;
    printf("Enter number of elements :\n");
    scanf("%d", &element_number);
    printf("Enter %d Numbers :\n", element_number);
    for (loop1 = 0; loop1 < element_number; loop1++)
        scanf("%d", &array[loop1]);
    for(loop1 = 0; loop1 < element_number - 1; loop1++)
    {
        position=loop1;
        for(loop2 = loop1 + 1; loop2 < element_number; loop2++)
        {
            if(array[position] > array[loop2]){
                position=loop2;
        printf("\n");
        for(loop3=0;loop3<element_number;loop3++){
            printf("%d  ",array[loop3]);
            }
        }
        if(position != loop1)
        {
            swap=array[loop1];
            array[loop1]=array[position];
            array[position]=swap;
        }
        }
    }
    printf("\nSorted Array:\n");
    for(loop1 = 0; loop1 < element_number; loop1++)
        printf("%d  ", array[loop1]);
    return 0;
}
