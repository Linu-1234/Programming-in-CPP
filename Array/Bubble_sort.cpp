// Sort the Array using Bubble Sort

#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j< n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cout << "Enter element no. " << i + 1 << ": ";
        cin >> arr[i];
    }

    bubbleSort(arr,n);

    cout<<"The sorted array is : "<<endl;
    for(int i =0;i < n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}


// output 
// Enter the size of the array: 5
// Enter element no. 1: 2
// Enter element no. 2: 6
// Enter element no. 3: 1
// Enter element no. 4: 8
// Enter element no. 5: 2
// The sorted array is :
// 1 2 2 6 8