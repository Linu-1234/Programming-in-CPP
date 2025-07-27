// Check if a number is a prime number using a function.

#include<iostream>
using namespace std;

bool isprime(int n){
    bool prime = true;

    for(int i =2;i<n;i++){
        if(n % i == 0){
            prime = false;
            break;
        }
    }
    return prime;
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    int result = isprime(n);

    if(n<=1){
        cout<<n<<" is not a prime number.";
    }
    else if(result == true){
        cout<<n<<" is a prime number.";
    }
    else{
        cout<<n<<" is not a prime number.";
    }
    return 0;  
}



// output
// Enter a number : 3
// 3 is a prime number.