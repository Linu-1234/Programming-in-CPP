// Create a function to check whether a number is an Armstrong number.

#include<iostream>
using namespace std;

int power(int a, int b){
    int ans = 1;
    for(int i = 1; i <= b; i++){
        ans *= a;
    }
    return ans;
}

int order(int n) {
    int digits = 0;
    while (n != 0) {
        digits++;
        n = n / 10;
    }
    return digits;
}

bool isArmstrong(int n) {
    int num = n; 
    int sum = 0;
    int pow = order(n);

    while (n != 0) {
        int digit = n % 10;
        sum += power(digit, pow);
        n /= 10;
    }

    return (sum == num);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isArmstrong(n)) {
        cout << n << " is an Armstrong number.";
    } else {
        cout << n << " is not an Armstrong number.";
    }

    return 0;
}


// output
// Enter a number: 153
// 153 is an Armstrong number.