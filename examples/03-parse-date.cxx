#include <unformat.h>
#include <iostream>
#include <string>


int main() {
  int year, month, day;

  // As an optimisation, if the format string is known at compile time
  constexpr auto format = ay::make_format("Today is {}-{}-{}.");
  ay::unformat("Today is 2025-12-24.", format, year, month, day);

  std::cout << "Year: " << year << ", Month: " << month << ", Day: " << day
            << std::endl;
  return 0;
}
