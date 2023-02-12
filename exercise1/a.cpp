#include <iostream>

using namespace std;

void temperatures_period(int length) {
  double temp;
  int under10 = 0, mellom1020 = 0, over20 = 0;

  for (int i = 0; i < length; i++) {
    cout << "Temperatur nummer " << i + 1 << ": ";
    cin >> temp;
    if (temp < 10)
      under10++;
    else if (temp >= 10 && temp <= 20)
      mellom1020++;
    else if (temp > 20)
      over20++;
  }
  cout << "Antall under 10 er " << under10 << endl;
  cout << "Antall mellom 10 og 20 er " << mellom1020 << endl;
  cout << "Antall over 20 er " << over20 << endl;
}

int main() {
  const int length = 5;

  cout << "Oppgave a)" << endl;
  temperatures_period(length);
}
