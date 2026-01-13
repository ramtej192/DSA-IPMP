#include <iostream>
using namespace std;

void bsort(int a[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        bool swap = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swap = true;
            }
        }
        if (!swap)
            break;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];  
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bsort(arr, n);
    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

