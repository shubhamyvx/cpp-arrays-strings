#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, result = "";

    cout << "Enter a sentence: ";
    getline(cin, str);

    bool previousSpace = false;

    for (char ch : str) {
        if (ch != ' ') {
            result += ch;
            previousSpace = false;
        } else {
            if (!previousSpace) {
                result += ch;
                previousSpace = true;
            }
        }
    }

    if (!result.empty() && result.front() == ' ')
        result.erase(0, 1);

    if (!result.empty() && result.back() == ' ')
        result.pop_back();

    cout << "Updated String: " << result;

    return 0;
}