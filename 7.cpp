#include <iostream>

using namespace std;

int count_chars(string count, char a) {
    int j = 0;
    string b(1, a);
    for (int i = 0; i < count.length(); i++) {
        if (count.substr(i, 1) == b) { j++; }
    }
    return f;
}

int main() {
    char a = '1';
    string count = "0001111222234445566789789";
    cout << count_chars(count, a) << endl;
    return 0;

}
