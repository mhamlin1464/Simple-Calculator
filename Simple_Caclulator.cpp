#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
using namespace std;

int Simple_Calculator(int num1, int num2, string op){
    if (op == "add"){
        return num1 + num2;
    }
    else if (op == "subtract"){
        return num1 - num2;
    }
    else if (op == "divide"){
        return num1/num2;
    }
    else if (op == "multi"){
        return num1*num2;
    }
    return 0;
}

int main(){
    cout << setw(20) << "Simple Calculator" << endl;
    cout << setw(20) << "-----------------------" << endl;
    bool running = true;
    while (running){
        cout << setw(20) << "\nWould you like to continue with an operation: Y/N"<< endl;
        string question;
        cin >> question;
        if (question == "Y"){
            cout << left<<  "Please pick an operation: add/subtract/divide/multi" << endl;
            string op;
            cin >> op;
            cout << left << "What is your first number: ";
            int num1;
            cin >> num1;
            cout<< left << "What is your second number: ";
            int num2;
            cin >> num2;
            cout << left <<  "\nYour solution is " << Simple_Calculator(num1,num2,op);
        }
        else{
            cout << setw(20) <<  "\nThank you! Have a good day!" << endl;
            running = false;
        }
    }
    return 0;
}