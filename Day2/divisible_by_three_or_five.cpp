// Check if a number is divisible by 3 or 5.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if (n % 3 == 0 or n % 5 == 0){
        cout<<n<<" is divisible by 3 or 5.";
    }
    else{
        cout<<n<<" is not divisible by 3 or 5.";
    }
    return 0;
}


// output
// Enter a number : 6
// 6 is divisible by 3 or 5.