// Write a function to add two numbers.

#include<iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}

int main(){
    int a,b;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    
    int result = add(2,3);
    cout<<"The sum of "<<a<<" and "<<b<<" is : "<<result;
    return 0;
}



// output
// Enter the first number : 2
// Enter the second number : 3
// The sum of 2 and 3 is : 5