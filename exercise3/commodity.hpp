#pragma once
#include <string>

const double sales_tax = 0.25;

class Commodity {
public:
  Commodity(const std::string &name_, int id_, double price_);
  const std::string &get_name() const;
  int get_id() const;
  double get_price(double units) const;
  void set_price(double price_);
  double get_price_with_sales_tax(double units) const;

private:
  std::string name;
  int id;
  double price;
};

Commodity::Commodity(const std::string &name_, int id_, double price_) : name(name_), id(id_), price(price_) {}

const std::string &Commodity::get_name() const {
  return name;
}

int Commodity::get_id() const {
  return id;
}

double Commodity::get_price(double units = 1) const {
  return price * units;
}

void Commodity::set_price(double price_) {
  price = price_;
}

double Commodity::get_price_with_sales_tax(double units = 1) const {
  return units * price * (1 + sales_tax);
}
