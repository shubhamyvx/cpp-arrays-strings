#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    bool onlyDigits = true;

    for (char ch : str) {
        if (!isdigit(ch)) {
            onlyDigits = false;
            break;
        }
    }

    if (onlyDigits)
        cout << "The string contains only digits.";
    else
        cout << "The string does not contain only digits.";

    return 0;
}