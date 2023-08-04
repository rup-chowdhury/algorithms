def mergeSort(array):
    if len(array)>1:

        middle = len(array)//2 #finding middle of array

        left = array[:middle]  #left half of the array

        right = array[middle:] #right half of the array

        mergeSort(left) #sorting the left or first half

        mergeSort(right) #sorting the right or second half

        loop1 = loop2 = loop3 = 0

        #Copying data temporarily to left[] ans right[]
        while loop1 < len(left) and loop2 < len(right):
            if left[loop1] < right[loop2]:
                array[loop3] = left[loop1]
                loop1 += 1
            else:
                array[loop3] = right[loop2]
                loop2 += 1
            loop3 += 1

        # to check if any element was left 
        while loop1 < len(left):
            array[loop3] = left[loop1]
            loop1 += 1
            loop3 += 1

        while loop2 < len(right):
            array[loop3] = right[loop2]
            loop2 += 1
            loop3 += 1


def printList(array):   #function to print the list
    for loop1 in range(len(array)):
        print(array[loop1], end=" ")
    print()


array = [12, 11, 13, 3, 5, 8]
print("Given array is", end="\n")
printList(array) #printing the given array list 
mergeSort(array) #sorting the array list
print("Sorted array is : ", end="\n")
printList(array)  #finally printing the sorted list