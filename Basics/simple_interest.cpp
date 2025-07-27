// Input principal, rate, and time, and calculate the simple interest.

#include<iostream>
using namespace std;
int main(){
    int principal;
    int rate;
    int time;
    cout<<"Enter principal : ";
    cin>>principal;
    cout<<"Enter rate : ";
    cin>>rate;
    cout<<"Enter time : ";
    cin>>time;

    float simple_interest =( principal * rate * time ) / 100;
    cout<<"The simple interest is : "<<simple_interest;
    return 0;
}


// output
// Enter principal : 1000
// Enter rate : 5
// Enter time : 2
// The simple interest is : 100