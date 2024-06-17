#include <iostream>
#include <string>

using namespace std;

int main() {
    string str{"Hello World"};

    string url = R"(<a href="file">C:\Program files\</a>\n)";
    cout << url << endl;

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

    size_t pos = str.find("or");

    if(pos != string::npos) {
        cout << pos << endl;
    }
}