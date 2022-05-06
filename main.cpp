#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char n;
        cin >> n;
        if (carattere (n) && (n<=90 && n>=65)) {
        cout << char (n+32);}
        else if (carattere (n) && (n>=97 && n<=122)) {
        cout << char (n-32);}
        else {
        cout << "errore"; }
    return 0;
}
