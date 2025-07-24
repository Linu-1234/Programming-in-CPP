// Take two floats as input and display their average.

#include<iostream>
using namespace std;
int main(){
    float a ,b;
    cout<<"Enter first floating number : ";
    cin>>a;
    cout<<"Enter second floating number : ";
    cin>>b;
    
    float avg = (a+b) / 2;
    cout<<"The average of two floating number is : "<<avg;
    return 0;
}



// output
// Enter first floating number : 2.5
// Enter second floating number : 3.5
// The average of two floating number is : 3