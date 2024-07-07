#include <iostream>
using namespace std;

void printHollowDiamond(int n) {
    int i = 0;

    // Top half
    while (i < n) {
        int j = 0;
        // Leading stars
        while (j < n - i - 1) {
            cout << "* ";
            j++;
        }
        j = 0;
        // Star or space
        while (j < 2 * i + 1) {
            if (j == 0 || j == 2 * i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
            j++;
        }
        j = 0;
        // Trailing stars
        while (j < n - i - 1) {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }

    i = n - 2;
    // Bottom half
    while (i >= 0) {
        int j = 0;
        // Leading stars
        while (j < n - i - 1) {
            cout << "* ";
            j++;
        }
        j = 0;
        // Star or space
        while (j < 2 * i + 1) {
            if (j == 0 || j == 2 * i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
            j++;
        }
        j = 0;
        // Trailing stars
        while (j < n - i - 1) {
            cout << "* ";
            j++;
        }
        cout << endl;
        i--;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows for the diamond (n): ";
    cin >> n;

    if (n <= 0) {
        cout << "Number of rows should be greater than 0." << endl;
    } else {
        printHollowDiamond(n);
    }

    return 0;
}
