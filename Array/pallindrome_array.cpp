// Check if Array is Pallindrome

#include<iostream>
using namespace std;

bool isPallindrome(int arr[],int n){


    int start = 0;
    int end = n-1;

    bool pallindrome = true;

    while(start < end){
        if(arr[start] != arr[end])
            return false;
        start ++;
        end--;
    }

    return true;

}

int main(){
    int arr[5] = {1,6,3,6,1};

    int n = sizeof(arr) / sizeof(arr[0]);

    if(isPallindrome(arr,n)){
        cout<<"The array is pallindrome.";
    }
    else{
        cout<<"The array is not pallindrome.";
    }

    return 0;
}


// output 
// The array is pallindrome.