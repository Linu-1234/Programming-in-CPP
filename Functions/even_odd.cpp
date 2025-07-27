// Check if a number is even or odd using a function.

#include<iostream>
using namespace std;

bool iseven(int n){
    if(n%2 == 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int result = iseven(n);
    cout<<result;

    if(n <= 0){
        cout<<n<<" is not a positive number.";
    }
    else if(result == true){
        cout<<n<<" is an even number.";
    }
    else{
        cout<<n<<" is an odd number.";
    }

    return 0;
}



// output
// Enter a number : 3
// 3 is an odd number.