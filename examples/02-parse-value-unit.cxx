#include <unformat.h>
#include <iostream>
#include <string>


int main() {
  double value;
  std::string unit;

  ay::unformat("The temperature is 36.6 Celsius.", "The temperature is {} {}.",
           value, unit);

  std::cout << "Value: " << value << ", Unit: " << unit << std::endl;
  return 0;
}
