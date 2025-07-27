// Print the first n numbers of fibonacci series.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int a = 0;
    int b = 1;
    cout<<a<<endl;
    cout<<b<<endl;
    for(int i = 2;i<n;i++){
        int sum = a+b;
        a = b;
        b = sum;
        cout<<sum<<endl; 
    }
    return 0;
}



// output
// Enter the value of n : 5
// 0
// 1
// 1
// 2
// 3