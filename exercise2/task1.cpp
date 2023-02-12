#include <iostream>

using namespace std;

int main() {

  // oppgave a)
  int i = 3;
  int j = 5;
  int *p = &i;
  int *q = &j;
  cout << "Address of i: " << &i << " and value: " << i << endl;
  cout << "Address of j: " << &j << " and value: " << j << endl;
  cout << "Address of p: " << &p << " and value when dereferenced: " << *p << " and then address it points to: " << p << endl;
  cout << "Address of q: " << &q << " and value when dereferenced: " << *q << " and then address it points to: " << q << endl;

  // oppgave b)
  // i = 7
  *p = 7;
  // j = 5 + 4
  *q += 4;
  // j = i + 1 => j = 7 + 1 = 8
  *q = *p + 1;
  cout << *p << " " << *q << endl;

  return 0;
}
