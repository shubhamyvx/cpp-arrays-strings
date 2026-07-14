#include <iostream>
#include <array>
using namespace std;

int main(){
    int sum = 0;
    float avg;
    array<int,5> arr;
    cout << "Enter elements :";
    for(int i = 0; i<5 ; i++){
        cin >> arr[i];
    }

    for(int i = 0 ; i<5 ; i++){
        sum = sum + arr[i];
    }
    avg =sum/5;
    cout << "Average :" << avg << endl;
    return 0;
}