#include<iostream>
using namespace std;

int main(){
    int n, i=1;
    cin>>n;

    // while (i<=n)
    // {
    //     int j=1, count = i;
    //     while(j<=i){
    //         cout<<count<<" ";
    //         count++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    while (i<=n)
    {
        int j=i;
        while(j<2*i){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    
}