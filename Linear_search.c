#include <stdio.h>

int main()
{
    int i,n,search;
    int array[50];

    printf("Enter number of elements in the array :");
    scanf("%d",&n);

    printf("Enter elements :\n");

    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    printf("Search element :");
    scanf("%d",&search);

    for(i=0;i<n;i++){
        if(array[i]==search){
            printf("%d is at Location %d. \n",search,i+1);
            break;
        }
    }
    if(i==n){
        printf("%d is not found .\n",search);
    }
    return 0;
}
