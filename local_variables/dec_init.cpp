#include <iostream>
#include <vector>
#include <string>
using namespace std;

// typedef vector<int> IntVec;
using IntVec = vector<int>;

void print(const vector<int>& vec) {
    for(auto v : vec) 
        cout << v << ", ";
    cout << endl;
}

void func(int i) {
    cout << "func(int i) called" << endl;
}
void func(int *i) {
    cout << "func(int *i) called" << endl;
}

int main() {
    string s{"This is great"};
    int x{7};
    cout << "s = \"" << s << "\"" << endl;
    cout << x << endl;

    vector<int> vec{4, 2, 3, 5, 1};
    print(vec);

    vector<int> oldone(4);
    vector<int> oldtwo(4, 2);
    vector<int> oldthree{4};
    vector<int> oldfour{4, 2};

    print(oldone);
    print(oldtwo);
    print(oldthree);
    print(oldfour);

    vector<IntVec> vecofvec;
    // func(NULL);
    func(nullptr);
}