#include <iostream>
using namespace std;

int main() {
    cout<<"The division of 2 numbers"<<endl;
    cout<<"---------------------"<<endl;

    int a, b, res=0;

    cout<<"Enter the first number: ";
    cin>>a;

    cout<<"Enter the second number: ";
    cin>>b;

    res = a / b;

    cout<<"The division of "<<a<<" and "<<b<<" is "<<res<<endl;

    return 0;
}
