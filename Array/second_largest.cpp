// Find the second largest element.

#include<iostream>
using namespace std;

int secondLargest(int arr[],int n){
    int largest = arr[0];
    for(int i = 1;i<n;i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    int secondlargest = INT32_MIN;
    for(int i = 0;i<n;i++){
        if(arr[i] > secondlargest && arr[i] != largest){
            secondlargest = arr[i];
        }
    }
    return secondlargest;
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
    cout<<"The second largest element of the array is : "<<secondLargest(arr,n);
    return 0;
}



// output
// Enter the size of the array : 5
// Enter the 1th element : 1
// Enter the 2th element : 5
// Enter the 3th element : 2
// Enter the 4th element : 4
// Enter the 5th element : 8
// The second largest element of the array is : 5
