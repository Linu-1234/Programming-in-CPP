// Sort the Array using Bubble Sort

#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i =0;i<n;i++){
        int minIndex = i;
        for(int j = i+1;j<n;j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        if(minIndex != i){
            swap(arr[i],arr[minIndex]);
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

    selectionSort(arr,n);

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
// Enter element no. 3: 3
// Enter element no. 4: 9
// Enter element no. 5: 2
// The sorted array is :
// 1 2 3 8 9