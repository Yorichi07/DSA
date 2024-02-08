//reverse an integer
#include<iostream>
using namespace std;

int main(){
    int n,digit,ans=0;
    cout<<"Enter a number:";
    cin>>n;

    if(ans>(INT_MAX/10) || ans<(INT_MIN/10)){
        cout<<'0';
    }
    else{
        while(n!=0){
            digit=n%10;
            ans=(ans*10)+digit;
            n=n/10;
        }
    }
    cout<<ans;
}