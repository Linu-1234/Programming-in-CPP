// Search for an element (Linear)

#include<iostream>
using namespace std;

int linearsearch(int arr[],int n, int element){
    for(int i =0 ;i<n;i++){
        if(arr[i] == element){
            return i;
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
    
    int index = linearsearch(arr,n,element);

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
// Enter the 1th element : 2
// Enter the 2th element : 7
// Enter the 3th element : 2
// Enter the 4th element : 8
// Enter the 5th element : 1
// Enter the element to be searched : 2
// The element 2 is found in the index 0