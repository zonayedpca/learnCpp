#include <iostream>
#include <vector>

int main() {
  std::cout << "std::vector" << '\n';
  std::vector<int> arr = {10, 20, 30, 40, 50, 60, 70, 80, 90};
  std::cout << "Get element: " << arr[5] << '\n';
  std::cout << "Element at: " << arr.at(7) << '\n';
  std::cout << "Size: " << arr.size() << '\n';
  std::cout << "Resize" << '\n';
  arr.resize(10);
  std::cout << "Size after resize: " << arr.size() << '\n';
  std::cout << "Rest of the element is zero: " << arr.at(9) << '\n';
  return 0;
}
