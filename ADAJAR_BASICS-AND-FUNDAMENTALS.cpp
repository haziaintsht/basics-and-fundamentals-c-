#include <iostream>
using namespace std;
int main() {
const int arrSize = 10;
int numE1r, numE2r, total;
int arr1[arrSize], arr2[arrSize], merged[arrSize * 2];
do {
cout << "Enter number of elements for first array (1-10): ";
cin >> numE1r;
if (numE1r <= 0 || numE1r > arrSize) {
cout << "Invalid input. Must enter number between 1-10." << endl;
}
} while (numE1r <= 0 || numE1r > arrSize);
cout << "Enter " << numE1r << " elements: ";
for (int i = 0; i < numE1r; i++) {
cin >> arr1[i];
}
do {
cout << "Enter number of elements for second array (1-10): ";
cin >> numE2r;
if (numE2r <= 0 || numE2r > arrSize) {
cout << "Invalid input. Must enter number between 1-10." << endl;
}
} while (numE2r <= 0 || numE2r > arrSize);
cout << "Enter " << numE2r << " elements: ";
for (int i = 0; i < numE2r; i++) {
cin >> arr2[i];
}
total = numE1r + numE2r;
for (int i = 0; i < numE1r; i++) {
merged[i] = arr1[i];
}
for (int i = 0; i < numE2r; i++) {
merged[numE1r + i] = arr2[i];
}
for (int i = 0; i < total - 1; i++) {
for (int j = 0; j < total - i - 1; j++) {
if (merged[j] < merged[j + 1]) {
int temp = merged[j];
merged[j] = merged[j + 1];
merged[j + 1] = temp;
}
}
}
cout << "Merged array in descending order: ";
for (int i = 0; i < total; i++) {
    cout << merged[i] << " ";
}
return 0;
}
