// Remove Duplicates From Sorted Array 

#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int j = 0; 

    for(int i = 1; i < n; i++) {
        if(arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    cout << "Array after removing duplicates:\n";
    for(int i = 0; i <= j; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}



// output 
// Array after removing duplicates:
// 1 2 3 4 5