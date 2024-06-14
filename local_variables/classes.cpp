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

int x{23};

namespace abc {
    int x{47};
    void func() {
        cout << "x = " << x << endl;
        cout << "::x = " << ::x << endl;
    }
}

void func(int a, int b) {
    cout << a << " + " << b << " = " << a+b << endl;
}
using pfunc = void (*)(int, int);

void some_func(int a, int b, pfunc func_ptr) {
    (*func_ptr)(a, b);
}

pfunc other_func(){
    return &func;
}

int main() {
    URL url("http", "www.example.com/index.html");
    url.display();
    abc::func();

    auto func_ptr = &func;
    (*func_ptr)(2, 4);

    auto func_p = other_func();

    some_func(2, 4, func_p);
}