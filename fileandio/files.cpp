#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream ifile{"text.txt"};
    if (ifile) {
        string text{""};
        while(ifile >> text) {
            cout << text << ", ";
        }
        cout << endl;
        ifile.close();
    }
    
}