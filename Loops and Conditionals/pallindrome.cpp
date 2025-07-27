// Check if a number is pallindrome or not.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    int num = n;
    int last_digit = 0;
    int reverse = 0;
    while(n != 0){
        last_digit = n % 10;
        reverse = (reverse * 10) + last_digit;
        n = n / 10;
    }

    if(num == reverse){
        cout<<num<<" is a pallindrome number.";
    }
    else{
        cout<<num<<" is not a pallindrome number.";
    }
    return 0;
}


// output
// Enter a number : 121
// 121 is a pallindrome number.