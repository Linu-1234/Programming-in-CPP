// Sort the Array using Bubble Sort

#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
    for(int i =1;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
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

    insertionSort(arr,n);

    cout<<"The sorted array is : "<<endl;
    for(int i =0;i < n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}



// output 
// Enter the size of the array: 5
// Enter element no. 1: 1
// Enter element no. 2: 8
// Enter element no. 3: 4
// Enter element no. 4: 9
// Enter element no. 5: 3
// The sorted array is :
// 1 3 4 8 9