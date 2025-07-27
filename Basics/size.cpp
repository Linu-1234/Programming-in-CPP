// Write a program to print the size (in bytes) of int, float, char, and double using sizeof().

#include<iostream>
using namespace std;
int main(){
    cout<<"The size of int is : "<<sizeof(int)<<" bytes."<<endl;
    cout<<"The size of float is : "<<sizeof(float)<<" bytes."<<endl;
    cout<<"The size of char is : "<<sizeof(char)<<" bytes."<<endl;
    cout<<"The size of double is : "<<sizeof(double)<<" bytes."<<endl;
    return 0;
}


// output
// The size of int is : 4 bytes.
// The size of float is : 4 bytes.
// The size of char is : 1 bytes.
// The size of double is : 8 bytes.