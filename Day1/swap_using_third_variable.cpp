// Swap values of two variables using a third variable.

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;

    int temp = a;
    a = b;
    b = temp;

    cout<<"The value of a is : "<<a<<endl<<"The value of b is : "<<b;
    return 0;
}



// output
// Enter first number : 2
// Enter second number : 3
// The value of a is : 3
// The value of b is : 2