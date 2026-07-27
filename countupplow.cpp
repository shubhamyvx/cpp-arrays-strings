#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    int uppercase = 0, lowercase = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str) {
        if (isupper(ch))
            uppercase++;
        else if (islower(ch))
            lowercase++;
    }

    cout << "Uppercase Letters: " << uppercase << endl;
    cout << "Lowercase Letters: " << lowercase << endl;

    return 0;
}