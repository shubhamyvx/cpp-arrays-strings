#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    for (char &ch : str) {
        ch = toupper(ch);
    }

    cout << "Uppercase String: " << str;

    return 0;
}