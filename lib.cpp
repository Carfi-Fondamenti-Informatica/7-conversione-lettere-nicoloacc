#include "lib.h"

bool carattere (int n) {
  if ((97<=n) && (n<=122) || (65<=n)&&(n<=90)) {
    return true;
  } else {
    return false;
  }
}
