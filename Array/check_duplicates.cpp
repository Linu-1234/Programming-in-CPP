// Given an array,tell if the array contains duplicates or not.

#include<iostream>
using namespace std;

int main() {
    int arr[5] = {1, 5, 7, 2, 5};
    bool flag = false; 

    for(int i = 0; i < 5; i++) {
        for(int j = i + 1; j < 5; j++) {
            if(arr[i] == arr[j]) {
                flag = true;
                break;
            }
        }
        if(flag) {
            break;
        }
    }

    if(flag) {
        cout << "Array contains duplicate values." << endl;
    } else {
        cout << "Array doesn't contain duplicate values." << endl;
    }

    return 0;
}


// output
// Array contains duplicate values.
