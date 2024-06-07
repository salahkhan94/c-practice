#include<iostream>
#include <string>

using namespace std;

class URL {
    private:
        string prot,reso;
    public:
        URL(string p, string r): prot(p), reso(r) {

        }
        void display() {
            cout << prot << "://" << reso << endl;
        }
};

int main() {
    URL url("http", "www.example.com/index.html");
    url.display();
}