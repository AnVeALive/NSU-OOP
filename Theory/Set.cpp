#include <iostream>
#include <fstream>
#include <sstream>
#include <set>

using namespace std;

void printaaa(const string &str) {
    cout << str;
}

int main(int argc, char *argv[]) {
    set<int> mas;
    mas.insert(5);
    mas.insert(3);
    mas.insert(5);

    cout << mas.size() << endl;

    istringstream inss("Hello 5 strings");
    int a;

    cout << a;

    return 0;
}