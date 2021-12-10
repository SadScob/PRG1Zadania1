#include <iostream>
using namespace std;

int main() {
    string name1;
    string name2;
    cout << "Enter 1 name\n";
    cin >> name1;
    cout << "Enter 2 name\n";
    cin >> name2;
    if (name1.length() > name2.length()){
        cout << name1 <<"!\n";
    }
    else if (name1.length() < name2.length()){
        cout << name2 << "...\n";
    }
    else
        cout << ".";
    return 0;
}
