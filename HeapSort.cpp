#include <iostream>
#include <chrono>
#include <fstream>

using namespace std;
using namespace chrono;

void heapify(double arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapsort(double arr[]) {
    int n = 1000000;

    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    for (int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

double a[1000000]; 

int main()
{
    cout << "Dang chay HeapSort: " << endl;
    
    for (int i = 1; i <= 10; i++)
    {

        string s = "test" + to_string(i) + ".txt";
        ifstream fi(s);
        
        if (!fi) {
            cout << "Khong tim thay file " << s << endl;
            continue;
        }

        for (int k = 0; k < 1000000; k++) {
            fi >> a[k];
        }
        fi.close(); 
        auto start = high_resolution_clock::now();
        heapsort(a);
        auto end = high_resolution_clock::now();
        auto time_taken = duration_cast<milliseconds>(end - start);
        cout << "Test " << i << " - HeapSort: " << time_taken.count() << " ms" << endl;
    }
    
    return 0;
}