#include <iostream>
using namespace std;

double calculate(double num1, double num2, char op) {
    switch (op) {
        case'+':
            return num1+num2;
        case'-':
            return num1-num2;
        case'*':
            return num1*num2;
        case'/':
            if (num2!=0) 
                return num1/num2;
            else {
                cout<<"X: Division by zero!\n";
                return 0;
            }
        default:
            cout<<"Wrong operator!\n";
            return 0;
    }
}

int main() {
    double num1, num2;
    char op;

    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter an operator (+, -, *, /): ";
    cin>>op;
    cout<<"Enter second number: ";
    cin>>num2;

    cout<<"result: "<<calculate(num1,num2,op)<<endl;
    
    
    return 0;
}
