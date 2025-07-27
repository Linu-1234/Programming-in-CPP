// Write a program to take 3 inputs (name, age, marks) and display them.

#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    int age;
    int marks;

    cout<<"Enter your name : ";
    cin>>name;
    cout<<"Enter your age : ";
    cin>>age;
    cout<<"Enter your marks : ";
    cin>>marks;

    cout<<"Details:"<<endl;
    cout<<"Name : "<<name<<endl<<"Age : "<<age<<endl<<"Marks : "<<marks;
    return 0;
}



// output
// Enter your name : Priyambada
// Enter your age : 20
// Enter your marks : 550
// Details:
// Name : Priyambada
// Age : 20
// Marks : 550
