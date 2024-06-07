#include <iostream>
using namespace std;

int func(int &y) {
    cout << "Address of y is : " << &y << endl;
    return y;
}

void badfunc() {
    int *nelem = new int{42};
    cout << *nelem << endl;

    int *arr = new int[*nelem];
    for(int i=0; i<*nelem; i++) {
        arr[i] = i;
    }

    for(int i = 0; i < *nelem; i++) {
        cout << arr[i] << ", ";
    }
    delete nelem;
    delete [] arr;
    return;
}

int main() {
    int x = 2;
    cout << "Address of x is : " << &x << endl;
    int z = func(x);
    cout << "Address of z is : " << &z << endl;
    cout << "x = " << x << endl;
    cout << "z = " << z << endl;

    int i{3};
    cout << &i << endl;
    int *p = &i;
    cout << p << endl;
    badfunc();
}