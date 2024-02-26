/*A variable that stores the address of another variable.
Can be of type int, char, array, function, or any other pointer.
4 bytes for 32bit compiler and 8 bytes for 64bit compiler.
* = dereference operator 

array uses pointer arithmetic
arr[i]=*(arr+i);
arr points to arr[0] then arr+i points to arr[i] 

-> const int* ptr - pointer to a constant integer
-> int* const ptr - constant pointer
-> int (*p)[5] - p is a pointer to 5 element integer array
-> Void pointer can point to any data type
-> ptrdiff_t - It represents the difference btw two pointers
-> offsetof - It calculates the offset of a member within a structure
-> Null pointer are explicitly set to zero, while uninitialized pointers have garbage values
-> We cannot apply arithmetic operations such as ++,-- to arr
   but we can make a pointer to an array and do arithmetic on that pointer
   eg- int* aptr=arr;

-> when we use "restrict" keyword while declaring a pointer then no other pointer can point to object that this pointer points to
*/
#include<stdio.h>

// int main(){
//     int a=7;
//     int* p=&a;
//     int* ptr = NULL;
//     printf("%d\n",&a);    //prints address of a
//     printf("%x\n",p);     //prints address of a in hexadecimal format
//     printf("%d\n",ptr);   
//     printf("%d\n",*p);    //prints value of a i.e. 7
//     printf("%d\n",a);   
//     printf("%d\n",p+1);    //adds size of int to p that is address of a    

//     int arr[]={1,2,3,4,5,6};
//     printf("Address of 1st element is %d\n",arr);
//     printf("Address of 1st element is %d\n",&arr[0]);
//     printf("Address of 2nd element is %d\n",&arr[1]);
//     printf("Address of 2nd element is %d\n",arr+1);
// }

int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int performOperation(int (*Operation)(int, int), int x, int y){
    return Operation(x,y);
}
int main(){
    int result=performOperation(add,10,5);
    printf("%d\n",result);
    result=performOperation(sub,20,8);
    printf("%d\n",result);
    return 0;
}