// Search for an Element (Binary Search)

#include<iostream>
using namespace std;

int binarysearch(int arr[],int n, int element){
    int start = 0;
    int end = n-1;
    while(start < end){
        int mid = ( start + end ) / 2;
        if(element == arr[mid]){
            return mid;
        }
        else if(element < arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;
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

    int element;
    cout<<"Enter the element to be searched : ";
    cin>>element;
    
    int index = binarysearch(arr,n,element);

    if(index == -1){
        cout<<"Element not found!";
    }
    else{
        cout<<"The element "<<element<<" is found in the index "<<index;
    }

    return 0;
}


// output
// Enter the size of the array : 5
// Enter the 1th element : 1
// Enter the 2th element : 2
// Enter the 3th element : 3
// Enter the 4th element : 4
// Enter the 5th element : 5
// Enter the element to be searched : 3
// The element 3 is found in the index 2