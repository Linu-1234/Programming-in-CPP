// Create a function to find LCM and GCD of two numbers.

#include<iostream>
using namespace std;

int GCD(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int LCM(int a, int b){
    return (a * b) / GCD(a,b);

}
int main(){
    int a,b;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    cout<<"The LCM is : "<<LCM(a,b)<<endl;
    cout<<"The GCD is : "<<GCD(a,b)<<endl;
    return 0;
}


// output
// Enter the first number : 12
// Enter second number : 18
// The LCM is : 36
// The GCD is : 6