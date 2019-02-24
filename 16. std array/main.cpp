#include <iostream>
#include <array>

int main() {
  std::array<int, 7> arr = {20, 30, 40, 50, 60, 70, 80};
  std::cout << "Array: " << arr[1] << '\n';
  std::cout << "Array at: " << arr.at(5) << '\n';
  std::cout << "Array size: " << arr.size() << '\n';
  std::cout << "Array begin: " << *arr.begin() << '\n';
  std::cout << "Array begin: " << *arr.end() << '\n';
  return 0;
}
