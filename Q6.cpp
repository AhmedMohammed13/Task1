#include <iostream>
using namespace std;

void findMinMax(int arr[], int n, int& min, int& max) {
    min = max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        } else if (arr[i] > max) {
            max = arr[i];
        }
    }
}

int main() {
    int arr[] = {5, 3, 7, 1, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min, max;

    findMinMax(arr, n, min, max);

    cout << "The smallest element in the array is " << min << "." << endl;
    cout << "The largest element in the array is " << max << "." << endl;

    return 0;
}
