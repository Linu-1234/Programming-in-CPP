// Create a function to check whether a number is an Armstrong number.

#include<iostream>
#include<cmath>
using namespace std;

int order(int n){
    int last_digit = 0;
    int answer = 0;

    while(n != 0){
        last_digit = n % 10;
        answer++;
        n = n / 10;
    }
    return answer;
}

int armstrong(int n){
    int last_digit = 0;
    int answer = 0;
    int power = order(n);

    while(n != 0){
        last_digit = n % 10;
        answer += pow(last_digit,power);
        n = n / 10;
    }

    return answer;

}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int num = n;

    int result = armstrong(n);

    if(result == num){
        cout<<n<<" is an armstrong number.";
    }
    else{
        cout<<n<<" is not an armstrong number.";
    }
    return 0;

}