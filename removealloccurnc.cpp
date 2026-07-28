#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, result = "";
    char ch;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter character to remove: ";
    cin >> ch;

    for (char c : str) {
        if (c != ch)
            result += c;
    }

    cout << "String after removal: " << result;

    return 0;
}