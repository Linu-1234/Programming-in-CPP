// Sum of first N natural numbers

#include<iostream>
using namespace std;

int sum(int n){
    if(n == 1){
        return 1;
    }
    else{
        return n + sum(n-1);
    }
}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"The sum of n natural numbers is : "<<sum(n);
    return 0;
}



// output
// Enter the value of n : 5
// The sum of n natural numbers is : 15