#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int words = 0;

    cout << "Enter a sentence: ";
    getline(cin, str);

    bool inWord = false;

    for (char ch : str) {
        if (ch != ' ' && !inWord) {
            words++;
            inWord = true;
        } else if (ch == ' ') {
            inWord = false;
        }
    }

    cout << "Number of Words: " << words;

    return 0;
}