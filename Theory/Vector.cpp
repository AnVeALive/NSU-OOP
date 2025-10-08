#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<char>> vec(3, vector<char>(5, '.'));

    cout << vec.capacity() << endl << endl;
    for (int i = 0; i < vec.capacity(); i++) {
        cout << vec[i].capacity() << endl;
    }
    cout << endl;
    for (int i = 0; i < vec.capacity(); i++) {
        for (int j = 0; j < vec[i].capacity(); j++) {
            cout << vec[i][j];
        }
        cout << endl;
    }

    return 0;
}