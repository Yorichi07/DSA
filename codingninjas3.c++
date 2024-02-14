// You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.
// Now, your task is to find the first and last occurrence of ‘k’ in 'arr'.
// Note :
// 1. If ‘k’ is not present in the array, then the first and the last occurrence will be -1. 
// 2. 'arr' may contain duplicate elements.

#include<iostream>
using namespace std;

int firstOccurence(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int mid=start + (end-start)/2;  
    int ans=-1;    

    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;      //there is a possibility that it is not first occurence so we will search in left part
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
    return ans;
}
int lastOccurence(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int mid=start + (end-start)/2;  
    int ans=-1;    

    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;      //there is a possibility that it is not last occurence so we will search in right part
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
    return ans;
}

int main(){
    int arr[9]={1,2,2,2,2,2,5,6,9};
    cout<<"First occurence of 2 is at index: "<<firstOccurence(arr,9,2)<<endl;
    cout<<"Last occurence of 2 is at index: "<<lastOccurence(arr,9,2)<<endl;

    cout<<"Total occurences of 2 is: "<<lastOccurence(arr,9,2) - firstOccurence(arr,9,2) + 1;
    return 0;
}