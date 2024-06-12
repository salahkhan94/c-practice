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
    cout << endl;

    
    for(string::const_iterator citr = stra.cbegin(); citr != stra.cend(); ++citr) {
        cout << *citr << ", ";
    }
    cout << endl;
    cout << "Reverse iterator" << endl;

    for(string::reverse_iterator ritr = stra.rbegin(); ritr != stra.rend(); ritr++) {
        cout << *ritr << ", ";
    }
    cout << endl;

    cout << "Reverse const iterator" << endl;

    for(string::const_reverse_iterator ritr = stra.crbegin(); ritr != stra.crend(); ritr++) {
        cout << *ritr << ", ";
    }
    cout << endl;

    for(auto st : stra) {
        st = 'H';
        cout << st ;
    }
    cout << endl;
    cout << stra << endl;

    for(auto& st : stra) {
        // st = 'H';
        cout << st ;
    }
    cout << endl;
    cout << stra << endl;

    cout << endl;

    cout << "Number of Elements : " << stra.end() - stra.begin() << endl;
    cout << "Number of Elements : " << distance(stra.begin(), stra.end()) << endl;
    auto last_elem = stra.end() - 1;
    cout << "Last element : " << *last_elem << endl;
    cout << "Middle element : " << *(stra.begin() + (stra.end()-stra.begin())/2) << endl;

}