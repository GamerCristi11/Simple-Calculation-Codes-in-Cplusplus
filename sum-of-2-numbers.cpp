#include <iostream>
using namespace std;

int main() {
    cout<<"The sum of 2 numbers"<<endl;
    cout<<"---------------------"<<endl;

    int a, b, sum=0;

    cout<<"Enter the first number: ";
    cin>>a;

    cout<<"Enter the second number: ";
    cin>>b;

    sum = a + b;

    cout<<"The sum of "<<a<<" and "<<b<<" is "<<sum<<endl;

    return 0;
}
