#include <iostream>
using namespace std;

int main() {
    int arr[100], n, pos, i;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter position to delete (1 to " << n << "): ";
    cin >> pos;

    if(pos < 1 || pos > n) {
        cout << "Invalid position!" << endl;
    } else {
        // Shift elements to the left
        for(i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        n--; // Reduce size

        cout << "Array after deletion:\n";
        for(i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
