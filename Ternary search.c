#include <stdio.h>

int Search(int array[],int n, int search){
    int low=0;
    int high = n-1;
    int middle_1,middle_2;

    while(low<=high){
        int middle_1 = (high-low)/3+low;
        int middle_2 = 2*(high-low)/3+low;
        if (search == array[middle_1]){
            return middle_1;
        }
        else if(search==array[middle_2]){
            return middle_2;
        }
        else if(search<array[middle_1]){
            high=middle_1-1;
        }
        else if(search<array[middle_2]){
            low = middle_1+1;
            high = middle_2-1;
        }
        else{
            low = middle_2 + 1;
        }
    }
    return -1;
}

int main()
{
    int n=7;
    int array[]={10,20,40,50,60,80,100};
    int index,search;
    printf("Search any element from [10,20,40,50,60,80,100]");
    printf("\nSearch element :");
    scanf("%d",&search);

    index = Search(array,n,search);

    if(index!=-1){
        printf("%d is present at location %d",search,index+1);

    }
    else{
        printf("%d is not found in the array",search);
    }
}
