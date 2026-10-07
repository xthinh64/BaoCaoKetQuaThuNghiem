#include <chrono>
#include <iostream>
#include <fstream>
using namespace std;
using namespace chrono;

void quicksort(double arr[], int left, int right) {
    int i = left, j = right;
    double pivot = arr[(left + right) / 2];

    while (i <= j) {
        while (arr[i] < pivot) i++;
        while (arr[j] > pivot) j--;
        if (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    if (left < j) quicksort(arr, left, j);
    if (i < right) quicksort(arr, i, right);
}

double a[1000000];

int main()
{
    cout << "Dang chay QuickSort: " << endl;
    
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
        quicksort(a, 0, 1000000 - 1);
        auto end = high_resolution_clock::now();
        auto time_taken = duration_cast<milliseconds>(end - start);
        cout << "Test " << i << " - QuickSort: " << time_taken.count() << " ms" << endl;
    }
    
    return 0;
}