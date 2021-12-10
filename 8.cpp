#include <iostream>

using namespace std;

void Show(string abc, int n){
    for (int i = n-1; i < abc.length(); i+=n)
        cout << abc.substr(i,1);
}
int main() {
    string abc = "AlaMaKota";
    int n = 3;
     Show( abc,n);
return 0;

}
