#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    int positive = 0, negative = 0, zero = 0;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;
    }

    cout << "Positive Elements: " << positive << endl;
    cout << "Negative Elements: " << negative << endl;
    cout << "Zero Elements: " << zero << endl;

    return 0;
}