#include <unformat.h>
#include <iostream>
#include <string>


int main() {
  std::string name;
  int age;

  ay::unformat("Harry is 18 years old.", "{} is {} years old.", name, age);

  std::cout << "Name: " << name << ", Age: " << age << std::endl;
  return 0;
}
