#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char ch;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter character to search: ";
    cin >> ch;

    int index = -1;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ch) {
            index = i;
            break;
        }
    }

    if (index == -1)
        cout << "Character not found.";
    else
        cout << "First occurrence at index " << index;

    return 0;
}