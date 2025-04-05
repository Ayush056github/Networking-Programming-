#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt = 0;

    cout << "Enter the size of the string: ";
    cin >> n;

    int arr[n];

    cout << "Enter the string (binary values 0/1):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Before bit stuffing: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "After bit stuffing: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (arr[i] == 1) {
            cnt++;
        } else {
            cnt = 0;
        }

        if (cnt == 5) {
            cout << "0";  
            cnt = 0; 
        }
    }
    
    cout << endl;
    return 0;
}



Output:-
  Enter the size of the string: 4
Enter the string (binary values 0/1):
1
1
1
1
Before bit stuffing: 1 1 1 1 1 
After bit stuffing: 111110
