#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter the row : ";
    cin>>r;
    cout<<"Enter the column : ";
    cin>>c;
    for(int i = 1 ; i <= r;i++){
        for(int j = 1;j <= c;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}



// output
// Enter the row : 3
// Enter the column : 5
// * * * * * 
// * * * * * 
// * * * * * 