// Write a function to find the maximum of three numbers.

#include<iostream>
using namespace std;

int largest(int a, int b, int c){
    if(a>b && a>c){
        return a;
    }
    else if(c>b && c>a){
        return c;
    }
    else{
        return b;
    }
}

int main(){
    int a,b,c;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    cout<<"Enter the third number : ";
    cin>>c;
    
    int maximum = largest(a,b,c);
    cout<<maximum<<" is the largest number.";
    return 0;
}



// output
// Enter the first number : 4
// Enter the second number : 7
// Enter the third number : 2
// 7 is the largest number.