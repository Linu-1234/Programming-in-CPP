// Reverse the array.

#include<iostream>
using namespace std;

void reverse(int arr[],int n) {
    int start = 0;
    int end = n-1;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
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

    reverse(arr,n);

    cout << "The reversed array is: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}



// output 
// Enter the size of the array: 5
// Enter element no. 1: 1
// Enter element no. 2: 8
// Enter element no. 3: 3
// Enter element no. 4: 7
// Enter element no. 5: 2
// The reversed array is: 2 7 3 8 1