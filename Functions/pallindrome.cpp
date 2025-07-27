// Write a function that checks if a number is a palindrome.

#include<iostream>
using namespace std;

int ispallindrome(int n){
    int num = n;
    int last_digit = 0;
    int reverse = 0;
    while(n != 0){
        last_digit = n % 10;
        reverse = (reverse * 10) + last_digit;
        n = n / 10;
    }
    return (num == reverse);
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    if(ispallindrome(n)){
        cout<<n<<" is a pallindrome number.";
    }
    else{
        cout<<n<<" is not a pallindrome number.";
    }
    return 0;
}


// output
// Enter a number : 121
// 121 is a pallindrome number.