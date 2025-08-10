// Rotate Array Elements (Right by 1)

#include<iostream>
using namespace std;

int main(){
    int arr[6] = {10,5,3,9,2,6};

    int n = sizeof(arr) / sizeof(arr[0]);

    int last = arr[n-1];

    for(int j = n-1 ; j > 0 ; j--){
        arr[j] = arr[j-1];
    }

    arr[0] = last;

    cout<<"The array after rotating right by 1 is :"<<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


// output
// The array after rotating right by 1 is :
// 6 10 5 3 9 2