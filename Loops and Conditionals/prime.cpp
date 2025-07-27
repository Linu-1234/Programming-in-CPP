// Check if a number is prime or not.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    if (n <= 1){
        cout<<n<<" is not a prime number.";
    }
    else{
        bool isprime = true;
        for(int i =2;i<n;i++){
            if (n % i == 0){
                isprime = false;
                break;
            }
        }
        if (isprime == true){
            cout<<n<<" is a prime number.";
        }
        else{
            cout<<n<<" is not a prime number.";
        }
    }

}


// output
// Enter a number : 5
// 5 is a prime number.