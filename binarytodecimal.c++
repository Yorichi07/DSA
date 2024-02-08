#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,digit,i=0,ans=0;
    cout<<"Enter a binary number:"<<endl;
    cin>>n;

    while(n!=0){
        digit=n%10;
        if (digit==1)
        {
            ans=(digit*pow(2,i)) + ans;
        }
        n=n/10;
        i++;
        
    }
    cout<<ans;
}