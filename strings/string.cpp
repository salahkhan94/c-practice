#include <iostream>
#include <string>

using namespace std;

int main() {
    string str{"Hello World"};

    str[1] = 'o';
    auto s1 = str.substr(6);
    auto s2 = str.substr(6, 2);

    cout << str << endl;
    cout << s1 << endl;
    cout << s2 << endl;

    string hello(str,1);
    string hello2(str, 1, 3);

    cout << hello << endl;
    cout << hello2 << endl;
}