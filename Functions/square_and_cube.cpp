// Create a function to calculate the square and cube of a number. Return both.

#include<iostream>

void calculate(int n, int &square, int &cube){
    square = n * n;
    cube = n * n * n;
}
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    int square = 0,cube = 0;
    calculate(n,square,cube);

    cout<<"The square of "<<n<<" is : "<<square<<endl;
    cout<<"The cube of "<<n<<" is : "<<cube<<endl;
    return 0;
    
}



// output
// Enter a number : 5
// The square of 5 is : 25
// The cube of 5 is : 125