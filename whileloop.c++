#include<iostream>
using namespace std;

//sum of all even numbers till n
// int main(){
//     int n;
//     cout<<"Enter value of n:"<<endl;
//     cin>>n;
//     int i=0, sum = 0;
//     while (i<=n)
//     {
//         sum = sum + i;
//         i=i+2;
//     }
//     cout<<sum<<endl;
// }

//prime or not
int main(){
    int n;
    cin>>n;

    int i=2;
    
    while(i<n){
        if(n%i==0){
            cout<<"Not prime for "<<i<<endl;
        }
        else
        {
            cout<<"Prime for "<<i<<endl;
        }
        
        i++;
    }
}