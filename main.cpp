#include <iostream>
#include "library.h"

using namespace std;
char a;
int main() {

    //table();
    //do{
        cin >> a;
        if (verifica(a)) {
            if (int(a) >= 97 && int(a) <= 122) {
                a = char(int(a) - 32);
            } else {
                a = char(int(a) + 32);
            }
        }
        cout << a<< endl;
    //}while(a!=0);
        return 0;

}
