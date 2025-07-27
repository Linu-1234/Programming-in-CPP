// Reverse a string using recursion

#include<iostream>
#include<string>
using namespace std;

void reverse(string &str,int start , int end){
    if(start >= end){
        return;
    }
    swap(str[start],str[end]);
    reverse(str,start+1,end-1);
}

int main(){
    string str;
    cout<<"Enter the string : ";
    cin>>str;

    reverse(str,0,str.length()-1);
    cout<<"The reverse string is : "<<str;
    return 0;
}


// output
// Enter the string : lina
// The reverse string is : anil