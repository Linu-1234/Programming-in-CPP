// Calculate the sum and average.

#include<iostream>
using namespace std;

int sum(int arr[],int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}

int avg(int arr[],int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i];
    }
    return sum / n;
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
    cout<<"The sum of the elements of the array is : "<<sum(arr,n)<<endl;
    cout<<"The average of the elements of the array is : "<<avg(arr,n)<<endl;
    return 0;
}


// output
// Enter the size of the array : 5
// Enter the 1th element : 1
// Enter the 2th element : 2
// Enter the 3th element : 3
// Enter the 4th element : 4
// Enter the 5th element : 5
// The sum of the elements of the array is : 15
// The average of the elements of the array is : 3