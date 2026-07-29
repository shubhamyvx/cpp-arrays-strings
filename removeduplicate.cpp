#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, result = "";

    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str) {
        bool found = false;

        for (char c : result) {
            if (c == ch) {
                found = true;
                break;
            }
        }

        if (!found)
            result += ch;
    }

    cout << "String after removing duplicates: " << result;

    return 0;
}