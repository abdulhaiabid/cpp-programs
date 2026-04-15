#include <iostream>
using namespace std;

int main() {
    int array[4] = { 4, 3, 2, 1 };
    int arraySize = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < arraySize - 1; i++) {
        for (int j = 0; j < arraySize - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }

            for (int i = 0; i < arraySize; i++) {
                cout << array[i] << " ";
            }
            cout << endl;
        }
    }
    


    return 0;
}