// Byte Stuffing 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the Size of the string: ";
    cin >> n;

    char arr[n + 1]; 

    cout << "Enter the input string: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Before byte stuffing: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }

    cout << "\nAfter byte stuffing: F ";

    for (int i = 0; i < n; i++) {
        if (arr[i] == 'E') {
            cout << "E E ";
        } else if (arr[i] == 'F') {
            cout << "E E ";
        } else {
            cout << arr[i] << " ";
        }
    }

    cout << "F"; 
    return 0;
}

