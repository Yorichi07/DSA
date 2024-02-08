//power of 2 then T otherwise F

//brute force method
// #include<iostream>
// #include<math.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     bool b=1;
//     for(int i=0;i<=30;i++){
//         int ans = pow(2,i);
//         if(ans == n){
//             cout<<1;
//             return 1;
//         }
//     }
//     cout<<0;
//     return 0;
// }
    
//optimal solution
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,ans=1;
    cout<<"Enter a number:";
    cin>>n;

    bool b = false;

    for(int i=0;i<=30;i++){
        if(ans == n){
            b=true;
            break;
        }
        else{
            ans = ans*2;
        }
    }
    cout<<b;
}