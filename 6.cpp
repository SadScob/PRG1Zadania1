#include <iostream>

using namespace std;

bool is_divisible(int a, int b) {
    if (a % b == 0)
        return true;
    else
        return false;
}

int main() {
    int a;
    int b;
    cout << "Type first number\n";
    cin >> a;
    cout << "Type second number\n";
    cin >> b;
    cout << is_divisible(a, b) << endl;
    return 0;
}
