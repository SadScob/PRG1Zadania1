#include <iostream>

using namespace std;

int main() {
    cout << "Wpisz 5 imion, uzywajac 'enter' po kazdym! \n";
    string names[5];
    int a = 0;
    for (int i = 0; i < 5; i++) {
        cin >> names[i];
        if (names[i] == "Kuba" || names[i] == "kuba" || names[i] == "barnaba" || names[i] == "Barnaba") {
            continue;
        } else if (names[i].substr(names[i].length() - 1) == "a") {
            a++;
        }
    }

    cout << "zenskich : \t" << a << endl;
    cout << "menskich : \t" << 5 - a << endl;
    return 0;
}
