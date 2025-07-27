// Print numbers from N to 1 using recursion

#include<iostream>
using namespace std;

void print(int n){
    if(n == 0){
        return;
    }
    else{
        cout<<n<<" ";
        print(n-1);
    }
}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Printing "<<n<<" to 1 : "<<endl;
    print(n);
    return 0;
}





// // output
// Enter the value of n : 6
// Printing 6 to 1 :
// 6 5 4 3 2 1