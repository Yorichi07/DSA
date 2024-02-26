#include<stdio.h>
int main(){
    int arr[]={1,2,15,5,6,20,8,9};
    int *p=arr+1;
    int *q=arr+6;
    //int ans=p-q;
    printf("%d",q-p);
}