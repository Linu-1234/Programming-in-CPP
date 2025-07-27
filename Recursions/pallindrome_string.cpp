// Check if a string is a palindrome using recursion

#include<iostream>
#include<string>
using namespace std;

bool ispallindrome(string str, int start, int end){
    if(start >= end){
        return true;
    }
    if(str[start] != str[end]){
        return false;
    }
    else{
        ispallindrome(str,start+1,end-1);
    }
}

int main(){
    string str;
    cout<<"Enter the string : ";
    cin>>str;

    if(ispallindrome(str,0,str.length()-1)){
        cout<<str<<" is pallindrome.";
    }
    else{
        cout<<str<<" is not pallindrome.";
    }
    return 0;
}



// output
// Enter the string : madam
// madam is pallindrome.