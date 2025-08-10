// Find the Largest Element

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a;
    cout<<"Enter the no. of rows: ";
    cin>>a;
    int b;
    cout<<"Enter the number of columns: ";
    cin>>b;

    int arr[a][b];

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }

    int largest = INT_MIN;

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(arr[i][j]>largest){
                largest = arr[i][j];
            }
        }
    }

    cout<<"The largest element of the matrix is : "<<largest;
    return 0;
    
}


// output 
// Enter the no. of rows: 3
// Enter the number of columns: 4
// 1 5 7 3
// 2 6 3 8
// 3 8 9 0
// The largest element of the matrix is : 9