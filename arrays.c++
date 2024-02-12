// declaration - int/bool/double/float/char arr[n]
// access - arr[5]
/* initialization - int arr[3] = {1,4,5}; char arr[3] = {'a','b','s'};
To initialize an array with all 0s, int arr[n] = {0}, it only works for 0
For other values we can use fill_n(arr,sizeOf(arr),value) built-in function
int arr[4]={2,7} , if we print this array then output will be 2 7 0 0 (the indexes whose value we didnt provides in initialization is automatically initialized to 0)*/
// when we update any index of an array inside a function then it is also updated outside that function scope too which was not the case for variables as whenever we access array it goes to the base memory address of the array and update whereas in variables it creates a new copy of variable and update that instead of actual variable

#include<iostream>
using namespace std;

// int main(){
//     int arr[5];
//     fill_n(arr,5,1);
//     printArray(arr,size(arr));  

// }

//reverse,sum,max and min element of an array (can also use built-in functions like int x = max(x,arr[i]), int y = min(y,arr[i]))

void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void getReverse(int arr[], int n){
    int start=0, end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int getMax(int arr[],int size){
    int max=arr[0];
     for (int i = 0; i < size; i++)
    {
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int getMin(int arr[],int size){
    int min=arr[0];
     for (int i = 0; i < size; i++)
    {
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}
int getSum(int arr[],int size){
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter size of the array:"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter elements of the array:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Sum of values of array is: "<<getSum(arr,n)<<endl;
    cout<<"Maximum value in array is: "<<getMax(arr,n)<<endl;
    cout<<"Minimum value in array is: "<<getMin(arr,n)<<endl;

    getReverse(arr,n);
    cout<<"Reverse array is: ";
    printArray(arr,n);
}
