// Check if a number is armstrong number or not.

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int num = n;
    int digits = 0;
    int last_digit = 0;
    int sum = 0;
    while (n != 0){
        n = n / 10;
        digits++;
    }

    n = num;

    while (n != 0){
        last_digit = n % 10;
        sum += pow(last_digit,digits);
        n = n / 10;
    }
     
    if (num == sum){
        cout<<num<<" is an armstrong number.";
    }
    else{
        cout<<num<<" is not an armstrong number.";
    }
    return 0;
}


// output
// Enter a number : 9474
// 9474 is an armstrong number.