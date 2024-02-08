/*
Bitwise operators works at bit level.
AND- &, a=5, b=7 then a&b = 101 & 111 = 101 i.e 5
OR- |, a=5, b=7 then a|b = 101 | 111 = 111 i.e 7
NOT- ~, a=5 then ~a = -6
XOR- ^, a=5, b=7 then a^b = 101 ^ 111 = 010 i.e 2
*/ 

#include<iostream>
using namespace std;

int main(){
    int a=-6, b=7;
    int c = ~a;
    cout<<c;
}
