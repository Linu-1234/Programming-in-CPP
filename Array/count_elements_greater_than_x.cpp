// Count the elements greater than a given number x.

#include<iostream>
using namespace std;

int count(int arr[],int n,int x){
    int count = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] > x){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    for(int i = 0 ;i<n;i++){
        cout<<"Enter the "<<i+1<<"th element : ";
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the value of x : ";
    cin>>x;
    cout<<"The count of the elements greater than "<<x<<" is : "<<count(arr,n,x);
    return 0;
}


// output
// Enter the size of the array : 5
// Enter the 1th element : 1
// Enter the 2th element : 2
// Enter the 3th element : 3
// Enter the 4th element : 4
// Enter the 5th element : 5
// Enter the value of x : 3
// The count of the elements greater than 3 is : 2