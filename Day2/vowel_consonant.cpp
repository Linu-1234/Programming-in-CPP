// Check if a char is vowel or consonant.

#include<iostream>
#include<cctype>  // for tolower
using namespace std;

int main(){
    char ch;
    cout << "Enter the character : ";
    cin >> ch;

    ch = tolower(ch); 

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << ch << " is a vowel." << endl;
    }
    else {
        cout << ch << " is a consonant." << endl;
    }

    return 0;
}


// output
// Enter the character : A
// a is a vowel.
