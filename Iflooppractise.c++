#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the value of character:"<<endl;
    cin>>ch;

    if(ch>64 && ch<91){
        cout<<"Capital Case Alphabet"<<endl;
    }
    else if(ch>96 && ch<123){
        cout<<"Lower Case Alphabet"<<endl;
    }
    else if(ch>47 && ch<58){
        cout<<"Numeric"<<endl;
    }
    else
    {
        cout<<"Other Symbol"<<endl;
    }
}