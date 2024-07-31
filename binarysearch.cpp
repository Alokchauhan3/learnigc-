#include <iostream>
using namespace std;

int binarySearch(int arr[], int key, int n) {
    int s = 0;
    int e = n - 1;  // Corrected end index
    while (s <= e) {
        int mid = (s + e) / 2;

        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] > key) {
            e = mid - 1;
        } else {  // Added condition
            s = mid + 1;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key for search: ";
    cin >> key;
    int result = binarySearch(arr, key, n);
    if (result != -1) {
        cout << "Key found at index: " << result << endl;
    } else {
        cout << "Key not found" << endl;
    }
    return 0;
}
