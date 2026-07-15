#include <iostream>
#include <array>
using namespace std;

int main(){
    array<int,5> arr;
    cout << "Enter elements:";
    for(int i=0;i<5;i++){
        cin >> arr[i];
    }
    int max=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout << "largest element is: " << max << endl;
    return 0;
}