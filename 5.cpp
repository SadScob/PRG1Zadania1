#include <iostream>

using namespace std;

bool is_even(int a) {
    if (a % 2 == 0)
        return true;


    else
        return false;
}

int main() {
    int a;
    cout << "Enter the number: \t";
    cin >> a;
    cout << is_even(a) << endl;
    return 0;
}
