// Count the Number of Digits in a Number

#include<iostream>
using namespace std;

int count(int n){
    if(n == 0){
        return 0;
    }
    else{
        return 1 + count(n / 10);
    }
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"The number of digits in "<<n<<" is : "<<count(n);
    return 0;
}



// output
// Enter the number : 5473
// The number of digits in 5473 is : 4