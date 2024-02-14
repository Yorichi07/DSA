//binary search is always applied on sorted data structures. It is of O(logn) time complexity
#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int mid=start + (end-start)/2;      //to keep mid in integer range, otherwise when both start and end is INT_MAX then start+end will be out of int range

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        //right part
        else if(arr[mid]<key){
            start=mid+1;
        }
        //left part
        else{
            end=mid-1;
        }
        mid=start + (end-start)/2;
    }
    return -1;
}
int main(){
    int even[6]={1,2,4,5,6,7};
    int odd[5]={3,5,7,8,9};

    int eindex = binarySearch(even,6,7);
    cout<<"Index of 7 is: "<<eindex<<endl;

    int oindex = binarySearch(odd,5,7);
    cout<<"Index of 7 is: "<<oindex<<endl;

    return 0;
}