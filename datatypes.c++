/*
The general rules for naming variables are:
1. Names can contain letters, digits and underscores
2. Names must begin with a letter or an underscore (_)
3. Names are case sensitive (myVar and myvar are different variables)
4. Names cannot contain whitespaces or special characters like !, #, %, etc.
5. Reserved words (like C++ keywords, such as int) cannot be used as names

Data Types in C++:
1. int - 2 or 4 bytes (in 16 bits architecture it takes 2 bytes and in 32/64 bit it takes 4 bytes), 	Stores whole numbers, without decimals
2. char - 1 bytes, 	Stores a single character/letter/number, or ASCII values
3. bool - 1 bytes, Stores true or false values
4. float - 4 bytes, Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
5. double - 8 bytes, Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits

Ascii values of 'A'=65-90 , 'a-z'=97-122 , '0-9'=48-57
*/

#include<iostream>
using namespace std;
int main(){
    int a = 123;
    cout<<a<<endl;
    cout<<"Size of a is: "<<sizeof(a)<<endl;

    char b = 'v';
    cout<<b<<endl;
    cout<<"Size of b is: "<<sizeof(b)<<endl;

    bool c = true;
    cout<<c<<endl;
    cout<<"Size of c is: "<<sizeof(c)<<endl;

    float f = 12.3;
    cout<<f<<endl;
    cout<<"Size of f is: "<<sizeof(f)<<endl;

    double d = 12.33432;
    cout<<d<<endl;
    cout<<"Size of d is: "<<sizeof(d)<<endl;

    unsigned l = -2;    //unsigned data type is used to take all numbers as positive only
    cout<<l<<endl;

    //implicit typecasting
    int x = 'x';
    cout<<x<<endl;

    char ch = 120;
    cout<<ch<<endl;

    //explicit typecasting
    float z = 5.14;
    int y = (int)z;
    cout<<y<<endl;

    //in case of negative numbers first number is converted into binary then we take its 2's compliment(1's compliment then add 1)
    int w = -2;
    cout<<w<<endl;
}