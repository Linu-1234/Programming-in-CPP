// Power of a number (a^b using recursion)

#include<iostream>
using namespace std;

int power(int a, int b){
    if(b==0){
        return 1;
    }
    else{
        return a * power(a,b-1);
    }
}

int main(){
    int a,b;
    cout<<"Enter the base : ";
    cin>>a;
    cout<<"Enter the power : ";
    cin>>b;
    cout<<a<<" to the power "<<b<<" is : "<<power(a,b);
    return 0;
}



// output
// Enter the base : 2
// Enter the power : 3
// 2 to the power 3 is : 8