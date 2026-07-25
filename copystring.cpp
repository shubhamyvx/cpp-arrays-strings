#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter a string: ";
    getline(cin, str1);

    str2 = str1;

    cout << "Copied string: " << str2;

    return 0;
}