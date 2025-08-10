// Reverse the array.

#include<iostream>
using namespace std;

void reverse(int arr[], int reverse_arr[], int n) {
    for(int i = 0; i < n; i++) {
        reverse_arr[i] = arr[n - 1 - i];
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

    int reverse_arr[n];
    reverse(arr, reverse_arr, n);

    cout << "The reversed array is: ";
    for(int i = 0; i < n; i++) {
        cout << reverse_arr[i] << " ";
    }

    return 0;
}



// output
// Enter the size of the array: 5
// Enter element no. 1: 1
// Enter element no. 2: 8
// Enter element no. 3: 3
// Enter element no. 4: 2
// Enter element no. 5: 6
// The reversed array is: 6 2 3 8 1
