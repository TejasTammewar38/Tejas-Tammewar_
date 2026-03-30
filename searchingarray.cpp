#include <iostream>
using namespace std;

int main() {
    int arr[100], n, key, i;
    bool found = false;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Element found at position: " << i + 1 << endl;
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
