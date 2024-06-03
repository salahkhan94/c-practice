#include <iostream>
#include <vector>
#include <string>
using namespace std;

void print(const vector<int>& vec) {
    for(auto v : vec) 
        cout << v << ", ";
    cout << endl;
}

int main() {
    string s{"This is great"};
    int x{7};
    cout << "s = \"" << s << "\"" << endl;
    cout << x << endl;

    vector<int> vec{4, 2, 3, 5, 1};
    print(vec);
}