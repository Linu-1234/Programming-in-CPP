// Reverse Each Row

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

    for(int i=0;i<a;i++){
        int start = 0;
        int end = b-1;
        while(start<end){
            swap(arr[i][start],arr[i][end]);
            start++;
            end--;
        }
    }

    cout<<"The matrix after reversing the row is :"<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
    
}