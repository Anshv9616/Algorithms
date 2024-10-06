#include <iostream>
#include <algorithm>

using namespace std;

// Function to rotate the matrix 90 degrees clockwise
void rotate(int a[][1000], int n) {
    // Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {  // Start from j = i + 1 to avoid swapping back
            swap(a[i][j], a[j][i]);
        }
    }

    // Reverse each row
    for (int row = 0; row < n; row++) {
        reverse(a[row], a[row] + n);
    }
}

int main() {
    int a[1000][1000];
    int n;
    cin >> n;

    // Input the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    // Rotate the matrix
    rotate(a, n);

    // Output the rotated matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
