#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    int consonants = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str) {
        if (isalpha(ch)) {
            if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                  ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
                consonants++;
            }
        }
    }

    cout << "Number of consonants: " << consonants;

    return 0;
}