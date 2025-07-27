// Print numbers from 1 to N using recursion

#include<iostream>
using namespace std;

void print(int n, int current = 1){
    if(current > n){
        return;
    }
    else{
        cout<<current<<" ";
        print(n,current+1);
    }
}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Printing 1 to "<<n<<endl;
    print(n);
    return 0;
}


// output
// Enter the value of n : 5
// Printing 1 to 5
// 1 2 3 4 5 