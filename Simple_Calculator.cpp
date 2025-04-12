#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
#include <cctype>
using namespace std;

int Simple_Calculator(int num1, int num2, string op){
    if (op == "ADD"){
        return num1 + num2;
    }
    else if (op == "SUBTRACT"){
        return num1 - num2;
    }
    else if (op == "DIVIDE"){
        if (num2 == 0){
            cout << "Sorry! Cannot divide a number by zero! Try again!" << endl;
            return 0;
        }
        return num1/num2;
    }
    else if (op == "MULTI"){
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
        //This converts input to lowercase
        //size t is used to adjust for the size of the data 
        for (size_t i = 0; i < question.length(); i++){
            question[i] = toupper(question[i]);
        }
        if (question == "Y"){
            cout << left<<  "Please pick an operation: add/subtract/divide/multi" << endl;
            string op;
            cin >> op;
            //Manuall convert operation iput to lowercase
            for (size_t i =0; i < op.length(); i++){
                op[i] = toupper(op[i]);
            }
            cout << left << "What is your first number: ";
            int num1;
            cin >> num1;
            cout<< left << "What is your second number: ";
            int num2;
            cin >> num2;
            cout << left <<  "\nYour solution is " << Simple_Calculator(num1,num2,op);
        }
        else if (question == "N"){
            cout << setw(20) <<  "\nThank you! Have a good day!" << endl;
            running = false;
        }
        else{
            cout << "Invalid input. Please enter 'Y' or 'N'.";
        }
    }
    return 0;
}