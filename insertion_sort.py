#implementing insertion sort
def insertionSort(array):
#def is used her to define the function insertSort
    for loop1 in range(1,len(array)):
        #len is used here to get the size of the array
        key = array[loop1]

        loop2 = loop1-1
        while loop2 >= 0 and key < array[loop2] :
            array[loop2+1] = array[loop2]
            loop2 -= 1
        array[loop2+1]=key

array = [12,11,13,5,6]
insertionSort(array)
for loop1 in range(len(array)):
    print ("[%d]" % array[loop1], end=" ")
    #output result shows as a column. To show it as a row, I used [end=" "]