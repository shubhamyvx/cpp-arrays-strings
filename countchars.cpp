#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    int alphabets = 0, digits = 0, specialCharacters = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str) {
        if (isalpha(ch))
            alphabets++;
        else if (isdigit(ch))
            digits++;
        else if (!isspace(ch))
            specialCharacters++;
    }

    cout << "Number of Alphabets: " << alphabets << endl;
    cout << "Number of Digits: " << digits << endl;
    cout << "Number of Special Characters: " << specialCharacters << endl;

    return 0;
}