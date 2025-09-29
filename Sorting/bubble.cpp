#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &arr, int n) {
    for (int i = n - 1; i >= 1; i--) {
        // optional optimization: track if any swap happened
        bool swapped = false;

        // j starts from 1 so we can compare arr[j] with arr[j-1]
        for (int j = 1; j <= i; j++) {
            if (arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
                swapped = true;
            }
        }

        // print array after each outer pass (if you want to show progress)
        for (int k = 0; k < n; k++) {
            cout << arr[k] << (k + 1 < n ? " " : "");
        }
        cout << '\n';

        // if no swaps happened this pass, the array is already sorted
        if (!swapped) break;
    }
}

int main() {
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the Elements of Array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];   // <-- missing semicolon fixed
    }

    bubble_sort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << (i + 1 < n ? " " : "");
    }
    cout << '\n';

    return 0;
}
