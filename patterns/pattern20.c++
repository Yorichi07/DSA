#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i =1,count=1;

    while(i<=n){
        int space = n-i;
        while(space){
            cout<<' ';
            space--;
        }
        int j=1;
        int star = i;
        while(star){
            cout<<count;
            count++;
            star--;
        }
        cout<<endl;
        i++;
    }
}