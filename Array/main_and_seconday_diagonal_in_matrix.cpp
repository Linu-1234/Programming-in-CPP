// Print Main & Secondary Diagonal

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of rows and columns: ";
    cin>>n;

    int arr[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"The main diagonal elements are : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i][i]<<" ";
    }
    cout<<endl;

    cout<<"The secondary diagonal elements are: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i][n-i-1]<<" ";
    }
    return 0;
    
}


// output 
// Enter the no. of rows and columns: 3
// 1 2 3
// 4 5 6
// 7 8 9
// The main diagonal elements are :
// 1 5 9
// The secondary diagonal elements are:
// 3 5 7