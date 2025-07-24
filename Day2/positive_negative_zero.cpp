// Identify if a number is positive, negative, or zero.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if (n > 0){
        cout<<n<<" is a positive number.";
    }
    else if (n < 0){
        cout<<n<<" is a negative number.";
    }
    else{
        cout<<"The number is 0.";
    }
    return 0;
}


// output
// Enter a number : 6
// 6 is a positive number.