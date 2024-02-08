//constant can have int/char values. They cannot take float/string values.
//nested switches are also possible
//continue in switch case is not valid because continue statement is used to go to next iteration in a loop and switch case is conditional block not a loop, it does not know to continue to which case

// #include<iostream>
// using namespace std;

// int main(){
//     int num=1;
//     char ch = '1';

//     switch (ch)
//     {
//     case 1:
//         cout<<"Integer 1"<<endl;
//         break;      //if i comment this break, then next case will also execute till there is break
    
//     case '1':
//         switch (num)    //nested switch
//         {
//         case 1:
//             cout<<"The value of num is:"<<num<<endl;
//             break;
//         }
//         cout<<"Integer 2";
//         break;
    
//     default:
//         cout<<"default";
//         break;
//     }
// }

//how to exit infinite loop when you cannot use break statement
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     while(1){
//         switch (n)
//         {
//         case 1:
//             cout<<"case1";
//         case 2:
//             cout<<"case2";
//         default:
//             cout<<"default";
//         }
//     exit(0);    //program has run successfully(without any errors and interrupts) then it is terminated 
//     }
// }

//to make a program that takes total amount of money as input and gives the number of 100s,50s,20s and 1s currency required as output
#include<iostream>
using namespace std;

int main(){
    int amount,temp=0;
    cout<<"Enter amount:"<<endl;
    cin>>amount;

    switch (100)        //we didnt used break so all cases will be executed one by one
    {
    case 100:
        temp=amount/100;
        amount=amount%100;
        cout<<"Number of 100s: "<<temp<<endl;
    case 50:
        temp = amount/50;
        amount=amount%50;
        cout<<"Number of 50s: "<<temp<<endl;
    case 20:
        temp = amount/20;
        amount=amount%20;
        cout<<"Number of 20s: "<<temp<<endl;
    case 1:
        temp = amount/1;
        cout<<"Number of 1s: "<<temp<<endl;
        break;
    }
}