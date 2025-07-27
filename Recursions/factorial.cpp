// Factorial of a Number

#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0 or n ==1){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"The factorial is : "<<factorial(n);
    return 0;
}



// output
// Enter a number : 5
// The factorial is : 120