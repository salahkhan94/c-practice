#include <string>
#include <iostream>

using namespace std;

int main() {
    string names[2][4] = {
        {"wilma", "betty", "salahuddin", "dina"},
        {"Ellie", "Joel", "Jesse", "Tommy"}
    };

    for(int row = 0; row < 2; ++row) {
        for(int col = 0; col < 4; ++col) {
            cout << names[row][col] << ", ";
        } 
        cout << "\n";
    }
}