#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string exclaim(string str) {
    for(auto &c : str) {
        if(ispunct(c)) {
            c = '!';
        }
    }
    return str;
}

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
    
    str = "Hello World";
    size_t pos = str.find("or");

    if(pos != string::npos) {
        cout << pos << endl;
    }

    size_t pos2 = str.rfind("o");

    cout << pos2 << endl;
    string vowels{"aeiou"};

    cout << str.find_first_of(vowels) << endl;
    cout << str.find_last_of(vowels) << endl;
    cout << str.find_first_not_of(vowels) << endl;
    cout << str.find_last_not_of(vowels) << endl;

    str.append("wow!!!", 3, 2);
    cout << str << endl;

    string str2{"care"};

    str2.insert(1, "omp");
    cout << str2 << endl;

    size_t pos3 = str.find('o');
    str.erase(pos3, 1);

    cout << str << endl;

    str.erase(begin(str)+1, end(str)-1);
    cout << str << endl;

    string str3 = "Say Goodbye";
    cout << str3 << endl;
    str3.replace(begin(str3), begin(str3)+3, "Wave");
    cout << str3 << endl;

    string str4 = to_string(3.14159);

    // str4.insert(0, "Hello, ");
    str4 = "Hello, " + str4;

    cout << str4 << endl;

    cout << stoi("2a", nullptr, 16) << endl;

    double pi = stod(to_string(3.14159));

    cout << pi << endl;

    cout << str3 << str4 << endl;
    swap(str3, str4);
    cout << str3 << str4 << endl;

    for(auto c : str4) {
        if(isupper(c))
            cout << c << " is an uppercase character" << endl;
        if(islower(c))
            cout << c << " is a lowercase character" << endl;
        if(ispunct(c))
            cout << c << " is a punctuation character" << endl;
    }

    string str5 = "To be, or not to be, that is the question:";
    cout << str5 << endl;
    cout << exclaim(str5) << endl;
}