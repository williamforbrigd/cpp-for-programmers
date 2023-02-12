const double pi = 3.141592;

class Circle {
public:
  Circle(double radius_);
  int get_area() const;
  double get_circumreference() const;

private:
  double radius;
};

// ==> Implementasjon av klassen Circle

Circle::Circle(double radius_) : radius(radius_) {}

int Circle::get_area() const {
  return pi * radius * radius;
}

double Circle::get_circumreference() const {
  double circumreference = 2.0 * pi * radius;
  return circumreference;
}
