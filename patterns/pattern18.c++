#include<iostream>
using namespace std;

int main(){
    int n, i=1;
    cin>>n;

    while(i<=n){
        int space = n-i+1;
        while(space){
            cout<<"*";
            space--;
        }
        cout<<endl;
        i++;
    }
}