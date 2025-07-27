// Write a function to calculate factorial of a number (without recursion).

#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i = 2;i <= n;i++){
        fact *= i;
    }
    return fact;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    if(n == 0 || n == 1){
        cout<<"The factorial is : 1.";
    }
    else{
        cout<<"The factorial is : "<<factorial(n);
    }
    return 0;
}


// output
// Enter a number : 5
// The factorial is : 120