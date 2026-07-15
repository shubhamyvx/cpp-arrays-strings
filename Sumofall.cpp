#include <iostream>
#include <array>
using namespace std;

int main(){
    int sum = 0;
    array<int,5> arr;
    cout << "Enter elements :";
    for(int i = 0; i<5 ; i++){
        cin >> arr[i];
    }

    for(int i = 0 ; i<5 ; i++){
        sum = sum + arr[i];
    }
    cout << "Sum of all elements :" << sum << endl;
    return 0;
}
