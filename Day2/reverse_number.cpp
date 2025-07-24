// Reverse a number.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    int last_digit = 0;
    int reverse = 0;
    while(n != 0){
        last_digit = n % 10;
        reverse = (reverse * 10) + last_digit;
        n = n / 10;
    }
    cout<<"The reverse of the number is : "<<reverse;
    return 0;
}


// output
// Enter a number : 123
// The reverse of the number is : 321