#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    // 5 rows and each row contains a vector object size 3, initialized to 9
    vector<vector<int>> vec(5, vector<int>(3, 9));

    // print each row and columns
    for (auto& v : vec) {
        cout << &v << endl;
        for (int i : v) {
            cout << "value = " << i << endl; 
        }
    }

    return 0;
}