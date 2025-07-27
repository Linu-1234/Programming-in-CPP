// Print the Maximum of Three Numbers.

#include<iostream>
using namespace std;
int main(){
    int a , b, c;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    cout<<"Enter the third number : ";
    cin>>c;

    if (a>b && a>c){
        cout<<a<<" is the maximum number.";
    }
    else if (b>c && b>a){
        cout<<b<<" is the maximum number.";
    }
    else{
        cout<<c<<" is the maximum number.";
    }
    return 0;
}



// output
// Enter the first number : 3
// Enter the second number : 7
// Enter the third number : 2
// 7 is the maximum number.