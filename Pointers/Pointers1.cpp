#include <iostream>
using namespace std;

void printArray(int* array) {.
}

int main() {
    int variableX = 245;
    int variableY = 870;

    int array[] = {20, 30, 40, 50, 60};
    int* ptrX = &variableX;

    cout << "Value in variableX: " << variableX << endl;
    cout << "Value in ptrX: " << *ptrX << endl;
    return 0;
}