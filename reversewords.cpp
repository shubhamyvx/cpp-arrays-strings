#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a sentence: ";
    getline(cin, str);

    int end = str.length();

    cout << "Reversed Sentence: ";

    for (int i = str.length() - 1; i >= 0; i--) {
        if (i == 0 || str[i - 1] == ' ') {
            int start = i;

            while (start < end) {
                cout << str[start];
                start++;
            }

            if (i != 0)
                cout << " ";

            end = i - 1;
        }
    }

    return 0;
}