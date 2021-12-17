
#include <iostream>

using namespace std;

bool is_palindrome(string slowo) {
    for (int i = 0; i < slowo.length(); i++) {
        if (slowo.substr(i, 1) != slowo.substr(slowo.length() - i - 1, 1)) return false;
    }
    return true;

}

int main() {
    string slowo;
    cout << "Type the word to check\n";
    cin >> slowo;
    cout << is_palindrome(slowo) << endl;
    return 0;
}
