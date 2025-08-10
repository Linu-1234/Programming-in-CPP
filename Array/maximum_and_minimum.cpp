// Find the maximum/minimum element.

#include<iostream>
using namespace std;

int max(int arr[],int n){
    int max = arr[0];
    for(int i = 1;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int min(int arr[],int n){
    int min = arr[0];
    for(int i = 1;i<=n;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
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
    cout<<"The maximum element of the array is : "<<max(arr,n)<<endl;
    cout<<"The minimum element of the array is : "<<min(arr,n)<<endl;
    return 0;
}



// output
// Enter the size of the array : 5
// Enter the 1th element : 2
// Enter the 2th element : 5
// Enter the 3th element : 8
// Enter the 4th element : 1
// Enter the 5th element : 9
// The maximum element of the array is : 9
// The minimum element of the array is : 1

