// Print the sum of N natural numbers.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int sum = 0;
    for(int i =1;i<=n;i++){
        sum += i;
    }
    cout<<"The sum of "<<n<<" natural numbers is : "<<sum;
    return 0;
}


// output
// Enter the value of n : 5
// The sum of 5 natural numbers is : 15