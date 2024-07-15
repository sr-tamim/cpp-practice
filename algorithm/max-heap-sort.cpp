// heap sort insert and delete
// Time Complexity: O(nlogn)
// Space Complexity: O(1)

#include <iostream>
using namespace std;

// Function to insert a new element into the heap and maintain the heap property
void insert(int heap[], int& heapSize, int value) {
    heap[heapSize] = value;
    int index = heapSize;
    heapSize++;
    int parent = (index - 1) / 2;

    // Heapify up
    while (index > 0 && heap[index] > heap[parent]) {
        swap(heap[index], heap[parent]);
        index = parent;
        parent = (index - 1) / 2;
    }
}

// Function to delete the maximum element (root) from the heap and maintain the heap property
int deleteMax(int heap[], int& heapSize) {
    if (heapSize <= 0) {
        cerr << "Heap is empty\n";
        return -1;
    }
    int max = heap[0];
    heap[0] = heap[heapSize - 1];
    heapSize--;

    // Heapify down
    int index = 0;
    while (true) {
        int largest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;

        if (left < heapSize && heap[left] > heap[largest])
            largest = left;
        if (right < heapSize && heap[right] > heap[largest])
            largest = right;

        if (largest != index) {
            swap(heap[index], heap[largest]);
            index = largest;
        } else {
            break;
        }
    }

    return max;
}

// Function to perform heap sort
void heapSort(int arr[], int n) {
    int* heap = new int[n];
    int heapSize = 0;

    // Build the heap by inserting all elements
    for (int i = 0; i < n; i++) {
        insert(heap, heapSize, arr[i]);
    }

    // Extract elements from the heap and build the sorted array
    for (int i = n - 1; i >= 0; i--) {
        arr[i] = deleteMax(heap, heapSize);
    }

    delete[] heap; // Clean up the heap
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << std::endl;
}

int main() {
    int arr[] = {12, 71, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    printArray(arr, n);

    heapSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
