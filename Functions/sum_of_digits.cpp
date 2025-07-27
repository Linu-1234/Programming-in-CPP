// Write a function to print the sum of digits of a number.

#include<iostream>
using namespace std;
 
int sum(int n){
    int last_digit = 0;
    int answer = 0;
    while(n != 0){
        last_digit = n % 10;
        answer = answer + last_digit;
        n = n / 10;
    }
    return answer;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    cout<<"The sum of digits of "<<n<<" is : "<<sum(n);
    return 0;   
}


// output
// Enter the number : 123
// The sum of digits of 123 is : 6