// Title: simple operation with string
// Purpose: take user input using getline
// Enjoy the process - Practice makes Improvement
// Author: Fransiskus Agapa

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::getline;

int main() {

    string fullName;

    cout << " Please input your name : " << endl;
    getline(cin,fullName);
    cout << " Your input is : " << fullName << endl;


    return 0;
}
