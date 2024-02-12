#include<iostream>
using namespace std;

bool search(int arr[], int size, int x){
    for (int i = 0; i < size; i++)
    {
        if(x==arr[i]){
            cout<<"Element is located at "<<i+1<<"th position in the array"<<endl;
            return 1;
        }
    }
    return 0;
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
    
    int x;
    cout<<"Enter element to be search in the array:";
    cin>>x;

    if(search(arr,n,x)){
    }
    else{
        cout<<"Element is not present in the array.";
    }
}