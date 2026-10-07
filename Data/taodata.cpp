#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Tạo dãy tăng dần và giảm dần
    vector<double> ascending_array(1000000);
    vector<double> descending_array(1000000);
    generate(ascending_array.begin(), ascending_array.end(), []()
             {
        static double current = 0.0;
        return current += 0.01; });
    reverse_copy(ascending_array.begin(), ascending_array.end(), descending_array.begin());

    // Tạo 8 dãy số ngẫu nhiên
    vector<vector<double>> random_arrays(8, vector<double>(1000000));
    for (int i = 0; i < 8; ++i)
    {
        // Chỉnh nhẹ chia cho 10.0 để ra số thực có phần thập phân cho đẹp
        generate(random_arrays[i].begin(), random_arrays[i].end(), []() { return (double)rand() / 10.0; });
    }

    // kết hợp tất cả các dãy số để tạo thành bộ dữ liệu cuối cùng
    vector<vector<double>> data;
    data.push_back(ascending_array);
    data.push_back(descending_array);
    for (int i = 0; i < 8; ++i)
    {
        data.push_back(random_arrays[i]);
    }

    for (int i = 0; i < 10; ++i)
    {
        string filename = "test" + to_string(i + 1) + ".txt"; // Sẽ tạo test1.txt đến test10.txt
        ofstream fo(filename);
        
        for (const auto &element : data[i])
        {
            fo << element << "\n"; // Xuống dòng cho dễ nhìn và dễ đọc vào vector
        }
        
        fo.close();
        cout << "Da tao xong " << filename << endl;
    }
    
    return 0;
}