#include<iostream>
using namespace std;

int main(){
    int n, i=1;
    cin>>n;

    while(i<=n){
        int space = i-1;
        while(space){
            cout<<" ";
            space--;
        }
        int star = n-i+1;
        int value=i;
        while(star){
            cout<<value;
            value++;
            star--;
        }
        cout<<endl;
        i++;
    }
}