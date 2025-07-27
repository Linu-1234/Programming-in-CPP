// Make a menu-driven program using functions to perform addition, subtraction, multiplication, and division.\

#include<iostream>
using namespace std;

float addition(float a , float b){
    cout<<"The addition is : "<<a+b;
}

float subtraction(float a , float b){
    cout<<"The subtraction is : "<<a-b;
}

float multiplication(float a , float b){
    cout<<"The multiplication is : "<<a*b;
}

float division(float a , float b){
    cout<<"The addition is : "<<a/b;
}

int main(){
    cout<<"Menu"<<endl;
    cout<<"1 : addition"<<endl;
    cout<<"2 : subtraction"<<endl;
    cout<<"3 : multiplication"<<endl;
    cout<<"4 : division"<<endl;
    int choice;
    cout<<"Enter your choice(1-4) : ";
    cin>>choice;
    float a,b;
    cout<<"Enter two number : ";
    cin>>a>>b;

    switch(choice){
        case 1:
            addition(a,b);
            break;
        case 2:
            subtraction(a,b);
            break;
        case 3:
            multiplication(a,b);
            break;
        case 4:
            division(a,b);
            break;
        default:
            cout<<"Invalid choice";
    }
    return 0;
}


// output
// Menu
// 1 : addition
// 2 : subtraction
// 3 : multiplication
// 4 : division
// Enter your choice(1-4) : 3
// Enter two number : 2 3
// The multiplication is : 6