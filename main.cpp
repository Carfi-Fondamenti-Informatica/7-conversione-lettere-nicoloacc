#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char n;
        cin >> n;
    bool x = carattere(n);
        if ((x==1) && (n<=90 && n>=65)) {
        cout << char (n+32);}
        else if ((x==1) && (n>=97 && n<=122)) {
        cout << char (n-32);}
        else if (x==0) {
        cout << "errore"; }
    return 0;
}
