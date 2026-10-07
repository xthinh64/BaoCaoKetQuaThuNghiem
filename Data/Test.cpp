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

    vector<double> random_array(1000000);

    // THÊM ĐUÔI .txt VÀO TÊN FILE
    ofstream f1("test1.txt");
    for (int i = 0; i < 1e6; i++)
        f1 << ascending_array[i] << " ";
    f1.close();

    ofstream f2("test2.txt");
    for (int i = 0; i < 1e6; i++)
        f2 << descending_array[i] << " ";
    f2.close();

    // Tạo 8 dãy số ngẫu nhiên
    for (int i = 3; i <= 10; i++)
    {
        string s = "test" + to_string(i) + ".txt"; // THÊM ĐUÔI .txt
        generate(random_array.begin(), random_array.end(), rand);
        ofstream f3(s);
        
        // Đổi biến i ở trong thành j để không bị lỗi với vòng lặp ngoài
        for (int j = 0; j < 1e6; j++)
            f3 << random_array[j] << " ";
            
        f3.close();
    }
    
    cout << "Da tao xong 10 bo du lieu test!" << endl;
    
    return 0;
}