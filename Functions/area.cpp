// Use function overloading to create multiple area() functions for circle, square, and rectangle.

#include<iostream>
using namespace std;

float area(float r){
    return 3.14 * r * r;
}

int area(int a){
    return a * a;
}

int area(int a, int b){
    return a * b;
}

int main(){
    cout<<"Choice"<<endl;
    cout<<"1 : Circle"<<endl;
    cout<<"2 : Square"<<endl;
    cout<<"3 : Rectangle"<<endl;
    int choice;
    cout<<"Enter the choice(1-3) : "<<endl;
    cin>>choice;

    switch(choice){
        case 1:
            float r;
            cout<<"Enter the radius : "<<endl;
            cin>>r;
            cout<<"The area of the circle is : "<<area(r)<<endl;
            break;
        case 2:
            int a;
            cout<<"Enter the side : "<<endl;
            cin>>a;
            cout<<"The area of the square is : "<<area(a)<<endl;
            break;
        case 3:
            int m,n;
            cout<<"Enter the length : "<<endl;
            cin>>m;
            cout<<"Enter the breadth : "<<endl;
            cin>>n;
            cout<<"The area of the rectangel is : "<<area(m,n)<<endl;
            break;
        default:
        cout<<"Invalid choice"<<endl;
        break;
    }

}



// output
// Choice
// 1 : Circle
// 2 : Square
// 3 : Rectangle
// Enter the choice(1-3) :
// 2
// Enter the side :
// 3
// The area of the square is : 9