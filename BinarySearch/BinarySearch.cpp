#include <iostream>
using namespace std;

int binarySearch(int array[], int arraySize, int key) {
    int start = 0, end = arraySize - 1, mid;

    while (start <= end) {
        mid = start + (end - start) / 2;

        if (key == array[mid]) {
            return mid;
        } else if (key > array[mid]) {
            start = mid + 1;
        } else if (key < array[mid]) {
            end = mid - 1;
        }
    }

    return -1;
}

int main() {
    int array[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int arraySize = sizeof(array) / sizeof(array[0]);
    int key = 70;

    cout << "Array: ";
    for (int i = 0; i < arraySize; i++) {
        cout << array[i] << " ";
    }
    cout << "\nKey: " << key << endl;

    int index = binarySearch(array, arraySize, key);

    if (index == -1) {
        cout << key << "does'nt exist in the array." << endl;
    } else {
        cout << key << " is found at " << index << " index of the array.";
    }

    cin.get();
    cin.get();
    return 0;
}