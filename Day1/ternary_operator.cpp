// Write a program to find the largest of two numbers using a ternary operator.

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    int largest = a > b ? a : b;
    cout<<"The largest number is : "<<largest;
    return 0;

}


// output
// Enter the value of a : 5
// Enter the value of b : 7
// The largest number is : 7

