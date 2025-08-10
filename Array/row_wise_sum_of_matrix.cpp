// Row-wise Sum

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
        int sum = 0;
        for(int j=0;j<b;j++){
            sum += arr[i][j];
        }
        cout<<"The sum of the elements in row "<<i<<" is: "<<sum<<endl;
    }
    return 0;
    
}


// output
// Enter the no. of rows: 3
// Enter the number of columns: 3
// 1 2 3
// 4 5 6
// 7 8 9
// The sum of the elements in row 0 is: 6
// The sum of the elements in row 1 is: 15
// The sum of the elements in row 2 is: 24


