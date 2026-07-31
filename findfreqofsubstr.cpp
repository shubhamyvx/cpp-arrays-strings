#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, sub;

    cout << "Enter the main string: ";
    getline(cin, str);

    cout << "Enter the substring: ";
    getline(cin, sub);

    bool found = false;

    for (int i = 0; i <= str.length() - sub.length(); i++) {
        int j;

        for (j = 0; j < sub.length(); j++) {
            if (str[i + j] != sub[j])
                break;
        }

        if (j == sub.length()) {
            cout << "Substring found at index " << i << endl;
            found = true;
        }
    }

    if (!found)
        cout << "Substring not found.";

    return 0;
}