// Count Frequency of Each Element

#include<iostream>
using namespace std;

int main(){
    int arr[6] = {1,2,4,2,3,7};

    int n = sizeof(arr) / sizeof(arr[0]);

    bool visited[n] = {false};

    for(int i = 0;i<n;i++){
        if(visited[i]) {
            continue;
        }

        int count = 1;

        for(int j = i+1;j<n;j++){
            if(arr[i] == arr[j]){
                count++;
                visited[j] = true;
            }
        }

        cout<<arr[i]<<": "<<count<<endl;
    }
    return 0;
}


// output 
// 1: 1
// 2: 2
// 4: 1
// 3: 1
// 7: 1