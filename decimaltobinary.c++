/*
1. divide by 2
2. store remainder
3. repeat above 2 until n!=0
4. reverse the output string
*/

//approach 2
// #include<iostream>
// #include<math.h>
// using namespace std;

// int main(){
//     int n,bit,ans=0,i=0;
//     cout<<"Enter number:"<<endl;
//     cin>>n;

//     while (n!=0)
//     {
//         bit=n&1;
//         ans = (bit*pow(10,i)) + ans;
//         n=n>>1;
//         i++;
//     }
//     cout<<ans<<endl;
// }

//for negative number decimal to binary
#include<iostream>
#include<math.h>
#include<array>
using namespace std;

int main(){
    int n,bit,ans=0,i=0,carry=1,oneCmp[32] = {0};
    cout<<"Enter a negative number:"<<endl;
    cin>>n;

    n = n*(-1);

    while(n!=0){
        ans=(bit*pow(10,i) + ans);
        n=n>>1;
        oneCmp[i]=bit; 
        i++;       
    }

    //1's compliment
    for(int i=0; i<32;i++){
        if(oneCmp[i]==0){
            oneCmp[i]=1;
        }
        else if(oneCmp[i]==1){
            oneCmp[i]=0;
        }
    }

    //add 1 to each element
    for(int i=0; i<32; i++){
        ans = oneCmp[i];
        if(ans^carry){      //if xor true i.e. ans bit is 0 (initially carry=1)
            oneCmp[i]=1;
        }
        else                //ans bit is 1
        {
            oneCmp[i]=0;
        }
        
        if (ans&carry)   
        {
            carry=1;
        }

        else{
            break;
        }
    }

    for (int i = 31; i >=0; i--)
    {
        cout<<oneCmp[i];
    };
}