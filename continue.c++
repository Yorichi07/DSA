#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"hi"<<endl;
        cout<<"hey"<<endl;
        continue;   //will go for next iteration
        cout<<"hello"<<endl;    //unreachable
    }
}