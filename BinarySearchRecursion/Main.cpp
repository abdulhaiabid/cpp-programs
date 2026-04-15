#include <iostream>
using namespace std;

int binarySearch (int array[], int start, int end, int key) {
    if (start < end) {
        int mid = (end + (start - end)) / 2;
  
        if (array[mid] == key) {
            return mid;
        } else if (array[mid] > key) {
            return binarySearch(array[], start, mid - 1, key);
        } else if (array[mid] < key) {
            return binarySearch(array[], mid + 1, end, key);
        }
    } else {
        return -1;
    }
}

int main() {

}