// Create a function that takes a character and returns if it is a vowel or not.

#include<iostream>
#include<cctype>
using namespace std;

bool isvowel(char ch){
    char lower_ch = tolower(ch); 
    if(lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u'){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    
    int result = isvowel(ch);
    if(result == true){
        cout<<ch<<" is a vowel.";
    }
    else{
        cout<<ch<<" is not a vowel.";
    }
    return 0;
}



// output
// Enter a character : A
// A is a vowel.