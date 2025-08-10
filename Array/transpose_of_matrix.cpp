// Transpose of a Matrix

#include<iostream>
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

    cout<<"The transpose of the matrix is :"<<endl;

    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
           cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}



// output 
// Enter the no. of rows: 3
// Enter the number of columns: 2
// 1 2
// 3 4
// 5 6
// The transpose of the matrix is :
// 1 3 5
// 2 4 6