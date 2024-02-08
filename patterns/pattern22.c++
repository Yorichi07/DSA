#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;

    while(i<=n){
        //1st triangle
        int j = 1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }

        //2nd triangle
        int star = 2*(i-1);
        while(star){
            cout<<'*';
            star--;
        }

        //3rd triangle
        int k=n-i+1;
        while(k){
            cout<<k;
            k--;
        }
        cout<<endl;
        i++;
    }
}