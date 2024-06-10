#include <iostream>
#include <string>
using namespace std;

int main() {
    const char str[] = {'H', 'E', 'L', 'L', 'O'};
    const char *pend = str + 5;
    const char *p = str;

    while(p != pend) {
        cout << *p;
        p++;
    }
    cout << endl;

    string stra{"Hello World!"};
    for(string::iterator it = stra.begin(); it != stra.end(); it++) {
        cout << *it << ", ";
    }
}