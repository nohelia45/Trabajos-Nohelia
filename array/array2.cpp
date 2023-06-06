#include <iostream>
using namespace std;

void fillArray(int array[], int n) {
    for (int i = 0, j = 1; i < n; i++, j += 2) {
        array[i] = j;
    }
}

void printIndexes(int array[], int n) {
    for (int i = 0; i < n; i += 2) {
        cout << i << ":" << array[i] << endl;
    }
}

int main() {
    int array[10];
    fillArray(array, 10);
    printIndexes(array, 10);
    return 0;
}