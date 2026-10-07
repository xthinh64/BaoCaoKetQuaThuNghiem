#include <iostream>
#include <fstream>
#include <chrono>
#include <algorithm>
#include <string>

using namespace std;
using namespace chrono;

double a[1000000]; 

int main()
{
    cout << "Dang chay sort (c++): " << endl;
    
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
        sort(a, a + 1000000);
        auto end = high_resolution_clock::now();
        auto time_taken = duration_cast<milliseconds>(end - start);
        cout << "Test " << i << " - sort(C++): " << time_taken.count() << " ms" << endl;
    }
    
    return 0;
}