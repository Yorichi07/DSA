#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n for fibonnaci series:";
    cin>>n;

    int a=0, b=1, sum;
    cout<<a<<' '<<b<<' ';
    for (int i = 0; i < n-2; i++)
    {
        sum = a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
}