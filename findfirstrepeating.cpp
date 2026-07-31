#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    bool visited[256] = {false};
    bool found = false;

    for (char ch : str) {
        if (visited[(unsigned char)ch]) {
            cout << "First Repeating Character: " << ch;
            found = true;
            break;
        }

        visited[(unsigned char)ch] = true;
    }

    if (!found)
        cout << "No repeating character found.";

    return 0;
}