#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    if (str1.length() != str2.length()) {
        cout << "Strings are not anagrams.";
        return 0;
    }

    int count[256] = {0};

    for (char ch : str1)
        count[(unsigned char)ch]++;

    for (char ch : str2)
        count[(unsigned char)ch]--;

    bool anagram = true;

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            anagram = false;
            break;
        }
    }

    if (anagram)
        cout << "Strings are anagrams.";
    else
        cout << "Strings are not anagrams.";

    return 0;
}