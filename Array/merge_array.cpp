// Merge Two Arrays

#include<iostream>
using namespace std;

int main(){
    int a[5] = {1,2,3,4,5};
    int b[6] = {8,5,3,7,2,8};

    int n1 = sizeof(a) / sizeof(a[0]);
    int n2 = sizeof(b) / sizeof(b[0]);

    int merged[n1+n2] ;

    for(int i =0 ;i < n1 ;i++){
        merged[i] = a[i];
    }
    for(int i =0 ;i < n2 ;i++){
        merged[n1+i] = b[i];
    }

    cout<<"The merged array is : "<<endl;
    for(int i = 0;i< n1+n2;i++){
        cout<<merged[i]<<" ";
    }

    return 0;

}


// output
// The merged array is : 
// 1 2 3 4 5 8 5 3 7 2 8