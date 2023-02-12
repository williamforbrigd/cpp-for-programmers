#include <iostream>

using namespace std;

int main() {
  int a = 5;
  // int &b; er feil fordi man må initializere en referanse.
  int &b = a;
  int *c;
  c = &b;
  //*a = *b + *c; er feil fordi a er ikke en pointer så den kan ikke bli "dereferenced". b kan heller ikke bli "dereferenced" fordi
  // den er en referanse.
  a = b + *c;
  //&b = 2; b er en referanse til a. b og a har samme lagerplass så skal man endre på a så skriver man bare b = 2. Adressen til en variabel kan ikke forandres.
  b = 2;
}
