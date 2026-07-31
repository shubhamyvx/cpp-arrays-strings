#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int count[256] = {0};

    for (char ch : str)
        count[(unsigned char)ch]++;

    bool found = false;

    for (char ch : str) {
        if (count[(unsigned char)ch] == 1) {
            cout << "First Non-Repeating Character: " << ch;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "No non-repeating character found.";

    return 0;
}