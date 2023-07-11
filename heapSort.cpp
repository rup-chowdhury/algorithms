#include <iostream>

using namespace std;

void heapify(int array[], int size, int root)
{
    //initializing largest value, left and right node values
    int largest = root;
    int left = 2*root + 1;
    int right = 2*root + 2;

    //if left child is larger than root
    if (left < size && array[left]>array[largest]){
        largest = left;
    }

    //if right child is larger than root
    if (right < size && array[right]>array[largest]){
        largest = right;
    }

    // if largest value is not root yet
    if (largest != root){
        swap(array[root] , array[largest]);

        heapify(array , size , largest);
    }
}

//function to do the sorting 
void heapsort(int array[], int size)
{
    for ( int loop = size/2 - 1; loop >= 0; loop--){
        int root=loop;
        heapify(array, size, root);
    }

    for (int loop = size-1; loop>0; loop--){
        swap(array[0], array[loop]);

        heapify(array, loop, 0);
    }
}


//function to print the array
void printArray(int array[], int size)
{
    for (int loop=0; loop < size; ++loop){
        cout<< array[loop] << " ";
    }
    cout << "\n";
}

int main()
{
    int element_number;
    cout << "Enter number of elements you want to take as input : ";
    cin >> element_number;


    int array[element_number];
    cout << "Enter " << element_number <<" different elements : \n";
    for (int loop=0;loop<element_number;loop++){
        cin >> array[loop];
    }

    int size = sizeof(array)/sizeof(array[0]);

    heapsort(array, size);

    cout << "Sorted array is : \n";
    printArray(array, size);
}