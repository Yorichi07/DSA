/*
strings = 1-D character array
char name[20];
Null character - '\0' is used for termination of the string. Ascii value of null character is 0
cin>>name;
cout<<name;
Input- Aditya Sharma
Output- Aditya
cin stops execution when it recieves either space " ",tab "\t" ,and new line "\n" btw two words

int len = strlen(name);
strcmp(s1,s2) -> 0 if s1=s2 and not-zero if s1!=s2
strcpy(s2,s1) -> to copy s1 into s2
*/

#include <iostream>
using namespace std;
#include  <bits/stdc++.h>

int getLen(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
void reverse(char arr[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(arr[s++], arr[e--]);
    }
}
char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
    }
    return ch;
}
char toUpperCase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch;
    }
    else
    {
        char temp = ch + 'A' - 'a';
    }
    return ch;
}
bool isPalindrome(char s[], int n)
{
    int st = 0;
    int e = n - 1;
    while (st < e)
    {
        if (!isalnum(s[st]))
        { // if character is not alphanumeric continue
            st++;
            continue;
        }
        if (!isalnum(s[e]))
        { // if character is not alphanumeric continue
            e--;
            continue;
        }
        if (toLowerCase(s[st]) != toLowerCase(s[e]))
        {
            return false;
        }
        else
        {
            st++;
            e--;
        }
    }
    return true;
}
char getMaxOcc(string s)
{
    int arr[26] = {0};
    // creating an array with occurence of each alphabet with (a,A=0 to z,Z=25)
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            number = ch - 'A';
        }
        arr[number]++;
    }

    // getting index of max occurencing character
    int maxi = -1;
    int ans = 0; // index of max occuring character
    for (int i = 0; i <26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i; // updating index of max occuring character
            maxi = arr[i];
        }
    }
    return 'a' + ans; // to print that character
}

int main()
{
    char ch[100];
    // cin>>ch;
    // int n=getLen(ch);
    string s;
    //cin >> s;
    // cout<<reverse(arr,size);
    // cout<<isPalindrome(ch,n);
    // cout << getMaxOcc(s);

    cin.getline(ch,20);
    cout<<ch;
}

