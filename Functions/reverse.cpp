// Write a function to reverse a given number.

#include<iostream>
using namespace std;

int reverse(int n){
    int last_digit = 0;
    int answer = 0;

    while(n != 0){
        last_digit = n % 10;
        answer = (answer * 10) + last_digit;
        n = n / 10;
    }

    return answer;
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    cout<<"The reverse of the number is : "<<reverse(n);
    return 0;
}



// output
// Enter a number : 123
// The reverse of the number is : 321