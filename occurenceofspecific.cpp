#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char ch;
    int count = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter character to count: ";
    cin >> ch;

    for (char c : str) {
        if (c == ch)
            count++;
    }

    cout << "Occurrence of '" << ch << "' = " << count;

    return 0;
}