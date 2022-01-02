#include <iostream>

using namespace std;

bool is_even(bool res) {
    if (res == true) {
        return true;
    } else {
        return false;
    }
}

bool is_divisible(int fst, int scd) {
    if (fst % scd == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int a;
    int b;
    cout << "enter the first number\n";
    cin >> a;
    cout << " enter the second number\n";
    cin >> b;
    cout << is_even(is_divisible(a, b)) << endl;
    return 0;
}
