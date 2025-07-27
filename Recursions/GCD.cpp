// Find GCD (HCF) of two numbers using recursion

#include<iostream>
using namespace std;

int GCD(int a , int b){
    if(b == 0){
        return a;
    }
    else{
        return GCD(b,a%b);
    }
}

int main(){
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"The GCD is : "<<GCD(a,b);
    return 0;
}


// output
// Enter two numbers : 12 36
// The GCD is : 12