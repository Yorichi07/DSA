//prime or not
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    bool isPrime = 1;

    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            isPrime=0;
            break;  //get out of the for loop
        }
    }
    if(isPrime==1){
        cout<<"Prime Number"<<endl;
    }
    else{
        cout<<"Not a Prime Number"<<endl;
    }
}