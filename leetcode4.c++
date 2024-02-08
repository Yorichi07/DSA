//Given a base 10 integer n, return its complement

#include<iostream>
using namespace std;

int main(){
    int n,ans=0,mask=0;
    cout<<"Enter the number:"<<endl;
    cin>>n;

    int m=n;

    if(n==0){
        cout<<0;
    }
    
    while(m!=0){
        mask = (mask<<1) | 1;
        m=m>>1;
    }
    ans = (~n) & mask;
    cout<<ans;
}