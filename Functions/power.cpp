// Write a function to calculate power a^b.

#include<iostream>
using namespace std;

int power(int a,int b){
    int answer = 1;
    for(int i =1 ;i<=b;i++){
        answer *= a;
    }
    return answer;
}

int main(){
    int a,b;
    cout<<"Enter the base : ";
    cin>>a;
    cout<<"Enter the power : ";
    cin>>b;

    cout<<a<<" to the power b is : "<<power(a,b);
    return 0;

}


// output
// Enter the base : 2
// Enter the power : 3
// 2 to the power b is : 8