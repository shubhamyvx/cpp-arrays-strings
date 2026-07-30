#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    string str, word = "";

    cout << "Enter a sentence: ";
    getline(cin, str);

    map<string, int> frequency;

    str += ' ';

    for (char ch : str) {
        if (ch != ' ') {
            word += ch;
        } else {
            if (!word.empty()) {
                frequency[word]++;
                word = "";
            }
        }
    }

    cout << "Word Frequencies:\n";

    for (auto item : frequency) {
        cout << item.first << " : " << item.second << endl;
    }

    return 0;
}