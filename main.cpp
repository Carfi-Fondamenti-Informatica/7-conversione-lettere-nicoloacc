#include <iostream>

int main(){
  char n;
    cout << "inserisci un carattere" << endl;
        cin >> n;
        if (number (n) && (n<=90 && n>=65)) {
        cout << char (n+32);}
        else if (number (n) && (n>=97 && n<=122)) {
        cout << char (n-32);}
        else {
        cout << "errore"; }
  return 0;
}
