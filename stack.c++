#include<iostream>
using namespace std;

//stack fifo
int top=-1;
void push(int arr[], int n, int k){
    if(top==n-1){
        cout<<"Overflow"<<endl;;
    }
    top++;
    arr[top]=k;
}
int pop(int arr[],int n){
    if(top==-1){
        cout<<"Underflow"<<endl;
        return 0;
    }
    int temp=top;
    top--;
    return arr[temp];       //element which has been popped is returning
}
void print(int arr[],int n){
    if(top==-1){
        cout<<"Stack is empty";
    }
    for (int i = top; i >=0; i--)
    {
        cout<<arr[i]<<" ";
    }  
    cout<<endl; 
}

int main(){
    int n;
    cout<<"Enter size of stack:"<<endl;
    cin>>n;
    int arr[n];
    int option;
    bool b=1;
    while(b){
        cout<<"1. Push\n2. Pop\n3. Print\n4. Exit"<<endl;
        cin>>option;
        switch (option)
        {
        case 1:
            int value;
            cout<<"Enter value:"<<endl;
            cin>>value;
            push(arr,n,value);
            continue;
        
        case 2:
            pop(arr,n);
            continue;

        case 3:
            print(arr,n);
            continue;
        case 4:
            b=0;
            continue;
        default:
            cout<<"Please choose from above options only:"<<endl;
            break;
        }
    }
}