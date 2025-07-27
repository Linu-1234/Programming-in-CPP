// Check if a number is even or odd.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    if(n % 2 == 0){
        cout<<n<<" is an even number.";
    }
    else{
        cout<<n<<" is an odd number.";

    }
    return 0;
}


// output
// Enter a number : 5
// 5 is an odd number.