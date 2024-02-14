// You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
// Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
// You need to find and return that number which is unique in the array/list.
// for example: 2 3 1 6 3 6 2 -> 1

int findUnique(int *arr, int size)
{   
    //a^a=0 and 0^a=a
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];         //0^2 = 2^3^1^6^3^6^2 = 0^0^1^0 = 1
    }
    return ans;
}