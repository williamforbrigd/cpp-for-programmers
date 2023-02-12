#include "temperatures.hpp"
#include <fstream>
#include <iostream>

using namespace std;

void temperatures_period(double temperatures[], int length) {
  int under10 = 0, mellom1020 = 0, over20 = 0;
  for (int i = 0; i < length; i++) {
    double temp = temperatures[i];
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

void read_temperatures(double temperatures[], int length) {
  const char filename[] = "temperatures.dat";
  ifstream file;
  file.open(filename);
  if (!file) {
    cout << "Error when opening the file." << endl;
    exit(EXIT_FAILURE);
  }
  for (int i = 0; i < length; i++) {
    file >> temperatures[i];
  }
  file.close();
}

int main() {
  const int length = 13;
  cout << "Oppgave b)" << endl;
  double temperatures[length];
  read_temperatures(temperatures, length);
  temperatures_period(temperatures, length);
}
