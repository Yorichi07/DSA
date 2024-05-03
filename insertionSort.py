def insertionSort(arr):
    for i in range(1,len(arr)):     #starting from 1 because we consider 0th element already sorted
        key=arr[i]
        j=i-1

        while(j>=0 and key<arr[j]):
            arr[j+1]=arr[j]
            j=j-1
            print(arr)

        arr[j+1]=key

data=[9,5,1,4,3]
insertionSort(data)      