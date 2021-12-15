#include <iostream>
#include <string>

using namespace std;

int main() {
    string name1;
    string name2;
    string name3;
    string name4;
    string name5;
    cout << "enter the 1st name:\n";
    cin >> name1;
    cout << "enter the 2nd name:\n";
    cin >> name2;
    cout << "enter the 3d name:\n";
    cin >> name3;
    cout << "enter the 4th name:\n";
    cin >> name4;
    cout << "enter the 5th name:\n";
    cin >> name5;

//    for (int i = 1; i< 6; i++) {
//        for (int f = 1; f < 6; f++) {
    if (name1[name1.length() - 1] != 'a') {

        cout << name1 << " -- menskie\n";
    } else if (name1[name1.length() - 1] == 'a' && name1[name1.length() - 2] == 'b') {

        cout << " -- Menskie\n";

    }

    else {
        cout << name1 << " -- zenskie\n";

    }

    if (name2[name2.length() - 1] != 'a') {

        cout << name2 << " -- menskie\n";
    } else if (name2[name2.length() - 1] == 'a' && name2[name2.length() - 2] == 'b') {

        cout << " -- Menskie\n";

    }

    else {

        cout << name2 << " -- zenskie\n";

    }

    if (name3[name3.length() - 1] != 'a') {

        cout << name3 << " -- menskie\n";
    } else if (name3[name3.length() - 1] == 'a' && name3[name3.length() - 2] == 'b') {

        cout << " -- Menskie\n";
    }

    else {

        cout << name3 << " -- zenskie\n";

    }

    if (name4[name4.length() - 1] != 'a') {

        cout << name4 << " -- menskie\n";
    } else if (name4[name4.length() - 1] == 'a' && name4[name4.length() - 2] == 'b') {

        cout << " -- Menskie\n";

    }

    else  {

        cout << name4 << " -- zenskie\n";

    }


    if (name5[name5.length() - 1] != 'a') {

        cout << name5 << " -- menskie\n";
    } else if (name5[name5.length() - 1] == 'a' && name5[name5.length() - 2] == 'b') {
        cout << " -- Menskie\n";

    }

    else  {

        cout << name5 << " -- zenskie\n";

    }

//            cout << "menskich: "<< i<< endl;
//            cout << "zenskich: "<< f<< endl;
//        } }

    return 0;
}
