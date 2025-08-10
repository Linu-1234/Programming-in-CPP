// Search an Element

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

    int s;
    cout<<"Enter the element to be searched : ";
    cin>>s;

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(arr[i][j] == s){
                cout<<"The element is found at row "<<i+1<<" and column "<<j+1<<endl;
                break;
            }
        }
    }
    
    return 0;
    
}

// output 
// Enter the no. of rows: 3
// Enter the number of columns: 3
// 1 2 3
// 1 2 4
// 3 4 1
// Enter the element to be searched : 3
// The element is found at row 1 and column 3
// The element is found at row 3 and column 1

