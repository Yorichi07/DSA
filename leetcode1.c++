//Given an integer number n, return the difference between the product of its digits and the sum of its digits.
#include<iostream>
using namespace std;

int main(){
    int n, digit, prod=1, sum = 0;
    cin>>n;

    while (n!=0){
        int digit = n%10;
        prod = prod*digit;
        sum += digit;

        n = n/10;
    }
    int ans = prod - sum;
}