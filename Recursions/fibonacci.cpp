// Nth Fibonacci number using recursion

#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"The "<<n<<"th fibonacci term is : "<<fibonacci(n);
    return 0;
}


// output
// Enter the value of n : 5
// The 5th fibonacci term is : 5