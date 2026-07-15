#include <iostream>
#include <array>
using namespace std;

int main(){
    array<int,5> arr={1,2,3,4,5};
    cout << "Array elements: ";
    for(int i=0;i<5;i++){
        cout << arr[i] << ", ";
    }
    return 0;
}

