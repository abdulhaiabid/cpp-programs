#include <iostream>
using namespace std;

// {g++ Main.cpp -o Main}; if($?) {.\Main.exe};

void printArray(int array[], int arraySize, string arrayName) {
    cout << arrayName << " = { ";
    for (int i = 0; i < arraySize; ++i) {
        cout << array[i];

        if (i < (arraySize - 1)) {
            cout << ", ";
        }
    }
    cout << " }" << endl;
}

void bubbleSort(int array[], int arraySize) {
    for (int i = 0; i < arraySize - 1; ++i) {
        for (int j = 0; j < arraySize - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int linearSearch(int array[], int arraySize, int key) {
    for (int i = 0; i < arraySize; ++i) {
        if (array[i] == key) {
            return i;
        }
    }
    return -1; // Key not found.
}

int binarySearch(int array[], int arraySize, int key) {
    int start = 0, end = arraySize - 1, mid;
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (key == array[mid]) {
            return mid;
        } else if (key < array[mid]) {
            end = mid - 1;
        } else if (key > array[mid]) {
            start = mid + 1;
        }
    }
    return -1; // Key not found.
}

int main() {
    int array[] = { 60, 50, 40, 30, 20 }; 
    int arraySize = sizeof(array) / sizeof(array[0]);
    while (true) {
        int key, searchAlgorithmChoice = 0, sortingAlgorithmChoice = 0, keyIndex;
        printArray(array, arraySize, "Array");

        while (sortingAlgorithmChoice != 1 && sortingAlgorithmChoice != -1) {
            cout << "Select sorting algorithm:" << endl;
            cout << "1. Bubble Sort" << endl;
            cout << "Enter choice (-1 to exit): ";
            cin >> sortingAlgorithmChoice;
        }

        if (sortingAlgorithmChoice == -1) {
            break;
        }

        switch (sortingAlgorithmChoice) {
            case 1:
                bubbleSort(array, arraySize);
                cout << "Array is sorted." << endl;
                printArray(array, arraySize, "Array");
                break;
            default:
                break;
        }

        cout << "Enter key to find in array (-1 to exit): ";
        cin >> key;

        if (key == -1) {
            break;
        }

        while (searchAlgorithmChoice != 1 && searchAlgorithmChoice != 2 && searchAlgorithmChoice != -1) {
            cout << "Select Search Algorithm" << endl;
            cout << "1. Linear Search" << endl;
            cout << "2. Binary Search" << endl;
            cout << "Enter choice (-1 to exit): ";
            cin >> searchAlgorithmChoice;
        }

        if (searchAlgorithmChoice == -1) {
            break;
        }

        switch (searchAlgorithmChoice) {
        case 1:
            cout << "By linear search" << endl;
            keyIndex = linearSearch(array, arraySize, key);
            break;
        case 2:
            cout << "By binary search" << endl;
            keyIndex = binarySearch(array, arraySize, key);
            break;
        default:
            break;
        }

        if (keyIndex != -1) {
            cout << key << " is found at " << keyIndex << " index." << endl;
        } else {
            cout << key << " does not exist in the array." << endl;
        }

        cin.get(); // Hold Screen
        cin.get(); // Hold Screen
    }
    cin.get();
    cin.get();
    return 0;
}