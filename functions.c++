#include<iostream>
using namespace std;

// //a^b
// int power(int a, int b){
//     int ans=1;
//     for(int i=0;i<b;i++){
//         ans=ans*a;
//     }
//     return ans;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;

//     int ans=power(a,b);
//     cout<<ans;
// }

// //even or odd, even&1=0(false); odd&1=1(true)
// int isEven(int n){
//     if(n&1){
//         return 0;   //means odd
//     }
//     return 1;
// }

// int main(){
//     int n;
//     cin>>n;
//     if(isEven(n)){
//         cout<<"Even";
//     }
//     else{
//         cout<<"Odd";
//     }
// }

// //nCr calculation (function call stack = (from bottom to top) main()->nCr()->fact())
// int fact(int n){
//     int fact=1;     //considers case of 0 also
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     return fact;
// }
// int nCr(int n, int r){
//     int ans = (fact(n))/(fact(r)*fact(n-r));
//     return ans;
// }
// int main(){
//     int n,r,ans;
//     cin>>n>>r;
//     ans = nCr(n,r);
//     cout<<ans;
// }

// // 1-prime, 0-not prime
// bool isPrime(int n){   
//     for(int i=2;i<n;i++){
//         //divide ho gya
//         if(n%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main(){
//     int n;
//     cin>>n;
//     if(isPrime(n)){
//         cout<<"Prime";
//     }
//     else{
//         cout<<"Not Prime";
//     }
// }

// //AP = 3*n + 7
// int AP(int n){
//     int ans = (3*n)+7;
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans = AP(n);
//     cout<<ans;
// }

// //i/p a=2,b=3, then o/p=3 that is count total number of 1's in them(binary form)
// int ones(int n){
//     int bit,count=0;
//     while(n!=0){
//         bit = n&1;
//         if(bit){
//             count++;
//         }
//         n=n>>1;
//     }
//     return count;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;

//     int count = ones(a) + ones(b);
//     cout<<count;
// } 

// //fibonnaci series i/p = n, o/p = nth fibonacci number
// int nthFib(int n){
//     int a=0,b=1,fib;
//     for(int i=1;i<=n-2;i++){
//         fib=a+b;
//         a=b;
//         b=fib;
//     }
//     return fib;
// }
// int main(){
//     int n,fib;
//     cin>>n;
//     fib=nthFib(n);
//     cout<<fib;
// }

//function pass by value
int dummy(int n){
    n++;
    cout<<"The number is: "<<n<<endl;
    return n;
}
int main(){
    int n;
    cin>>n;
    
    dummy(n);
    cout<<"The number is: "<<n;
}