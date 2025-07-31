#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int medianOfThree(vector<int>& arr, int low, int high) {
    int mid = low + (high - low) / 2;
    if (arr[low] > arr[mid]) {
        swap(arr[low], arr[mid]);
    }
    if (arr[low] > arr[high]) {
        swap(arr[low], arr[high]);
    }
    if (arr[mid] > arr[high]) {
        swap(arr[mid], arr[high]);
    }
    swap(arr[mid], arr[high]);
    return arr[high];
}

int partition(vector<int>& arr, int low, int high) {
    int pivot = medianOfThree(arr, low, high);
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();

    quickSort(arr, 0, n - 1);

    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
