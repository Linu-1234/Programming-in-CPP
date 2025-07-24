// Find the factorial of a number.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int fact = 1;
    if (n == 0 or n == 1){
        cout<<"The factorial of "<<n<<" is : 1";
    }
    else{
        for(int i = 2;i<=n;i++){
        fact *= i;
        }
    cout<<"The factorial of "<<n<<" is : "<<fact;
    }
    return 0;
}



// output
// Enter the number : 0
// The factorial of 0 is : 1