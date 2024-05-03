#include<iostream>
using namespace std;

void maxHeapify(int arr[], int n,int i){
    int largest = i;
    int l=2*i+1;
    int r=2*i+2;

    if(l<=n && arr[l]>arr[largest]){
        largest=l;
    }
    if(r<=n && arr[r]>arr[largest]){
        largest=r;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        maxHeapify(arr,n,largest);
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    cout<<"Enter the size of array: "<<endl;
    int n;
    cin>>n;
    cout<<"Enter i: "<<endl;
    int i;
    cin>>i;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Unheapified array is :"<<endl;
    print(arr,n);
    maxHeapify(arr,n,i);
    cout<<endl;
    cout<<"Max heapified array is :"<<endl;
    print(arr,n);
}