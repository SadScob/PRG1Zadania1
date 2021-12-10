#include <iostream>

using namespace std;

void Wth() {
    int f = 0;
    for (int i = 2; i < 21; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
              f++; 
            }
        }
        if (f < 3) cout << i << " ";
        f = 0;
    }
}

int main() {
    Wth();
    cout << endl;
    Wth();
    cout <<endl;
    return 0;
}
