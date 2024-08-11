#include <iostream>
#include <print>

int main() {
  int sum = 0;

  for (;;) {
    int unit, number;
    std::cin >> unit >> number;

    if ((unit == -1) && (number == -1)) {
      break;
    }

    if ((unit == 15) && (number == 118158)) {
      sum += 500000000;
    }

    if ((unit == 15) && ((number == 118157) || (number == 118159))) {
      sum += 100000000;
    }

    if ((unit != 15) && (number == 118158)) {
      sum += 100000;
    }

    if (number == 178805) {
      sum += 50000;
    }

    if ((number % 1000) == 115) {
      sum += 10000;
    }

    if ((number % 100) == 87) {
      sum += 3000;
    }

    if ((number % 10) == 3) {
      sum += 300;
    }
  }

  std::println("{}", sum);
}
