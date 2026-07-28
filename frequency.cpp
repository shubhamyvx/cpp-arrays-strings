#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    bool visited[256] = {false};

    for (int i = 0; i < str.length(); i++) {
        if (visited[(unsigned char)str[i]])
            continue;

        int count = 1;

        for (int j = i + 1; j < str.length(); j++) {
            if (str[i] == str[j])
                count++;
        }

        cout << "'" << str[i] << "' : " << count << endl;
        visited[(unsigned char)str[i]] = true;
    }

    return 0;
}