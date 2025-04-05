// Hammingg Code 

#include <iostream>
using namespace std;

int main() {
    int a[8], b[8], c1, c2, c4, error_position;

    cout << "Enter 4-bit data: ";
    cin >> a[3] >> a[5] >> a[6] >> a[7];

   
    a[1] = a[3] ^ a[5] ^ a[7];  // P1
    a[2] = a[3] ^ a[6] ^ a[7];  // P2
    a[4] = a[5] ^ a[6] ^ a[7];  // P4

   
    cout << "Encoded data (7-bit Hamming Code): ";
    for (int i = 1; i < 8; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    
    cout << "Enter received 7-bit data: ";
    for (int i = 1; i < 8; i++) {
        cin >> b[i];
    }

  
    c1 = b[1] ^ b[3] ^ b[5] ^ b[7]; // P1
    c2 = b[2] ^ b[3] ^ b[6] ^ b[7]; // P2
    c4 = b[4] ^ b[5] ^ b[6] ^ b[7]; // P4

    error_position = c4 * 4 + c2 * 2 + c1 * 1; 

    if (error_position == 0) {
        cout << "No error detected in received data." << endl;
    } else {
        cout << "Error detected at position: " << error_position << endl;
      
        b[error_position] = (b[error_position] == 0) ? 1 : 0;
        cout << "Corrected Data: ";
        for (int i = 1; i < 8; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
