#include <stdio.h>

int main()
{
    int n,i,search,low,high,middle;
    int array[20];

    printf("Number of elements in the array:");
    scanf("%d",&n);

    printf("Enter elements in Descending order:\n");

    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    printf("Value to search :");
    scanf("%d",&search);

    low=0;
    high= n-1;
    middle=(low+high)/2;

    while(low<=high){
        if(array[middle]<search){
            high=middle-1;
        }
        else if(array[middle]==search){
            printf("%d is at Location %d:",search,middle+1);
            break;
        }
        else{
            low=middle+1;
        }
        middle=(low+high)/2;
    }
    if (low>high){
        printf("Element not found in the array. \n");
    }
    return 0;
}
