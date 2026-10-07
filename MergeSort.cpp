#include <iostream>
#include <fstream>
#include <chrono>
#include <string>

using namespace std;
using namespace chrono;

void merge(double arr[], int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;
    int i, j, k;
    double *L = new double[n1];
    double *R = new double[n2];

    for (i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }

    for (j = 0; j < n2; j++) {
        R[j] = arr[middle + 1 + j];
    }

    i = 0;
    j = 0;
    k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
    delete[] L;
    delete[] R;
}

void mergeSort(double arr[], int left, int right) {
    if (left >= right) {
        return;
    }

    int middle = left + (right - left) / 2;
    mergeSort(arr, left, middle);
    mergeSort(arr, middle + 1, right);
    merge(arr, left, middle, right);
}

double a[1000000];

int main()
{
    cout << "Dang chay MergeSort: " << endl;
    
    for (int i = 1; i <= 10; i++)
    {
        // 1. TẠO TÊN FILE VÀ ĐỌC DỮ LIỆU
        string s = "test" + to_string(i) + ".txt";
        ifstream fi(s);
        
        if (!fi) {
            cout << "Khong tim thay file " << s << endl;
            continue;
        }

        // Đổi biến lặp thành k để không trùng với biến i ở ngoài
        for (int k = 0; k < 1000000; k++) {
            fi >> a[k];
        }
        fi.close();
        auto start = high_resolution_clock::now();
        mergeSort(a, 0, 1000000 - 1);
        auto end = high_resolution_clock::now();
        auto time_taken = duration_cast<milliseconds>(end - start);
        cout << "Test " << i << " - MergeSort: " << time_taken.count() << " ms" << endl;
    }
    
    return 0;
}