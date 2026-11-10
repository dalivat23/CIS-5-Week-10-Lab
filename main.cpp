#include <iostream>

// Lab 10 — Tristan Daliva
// CIS 5 Week 10 · References & pointers

void swap_values(int& a, int& b) {
  int t = a; a = b; b = t;
}

int main() {
  int x = 3, y = 7;
  std::cout << "Before: " << x << " " << y << "\n";
  swap_values(x, y);
  std::cout << "After: " << x << " " << y << "\n";

  int* p = x;
  std::cout << "x via pointer: " << p* << "\n";

  return 0;
}
