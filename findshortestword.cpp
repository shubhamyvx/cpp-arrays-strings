#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, word = "", shortest = "";

    cout << "Enter a sentence: ";
    getline(cin, str);

    str += ' ';

    for (char ch : str) {
        if (ch != ' ') {
            word += ch;
        } else {
            if (!word.empty()) {
                if (shortest.empty() || word.length() < shortest.length())
                    shortest = word;
            }
            word = "";
        }
    }

    cout << "Shortest Word: " << shortest << endl;
    cout << "Length: " << shortest.length();

    return 0;
}