#include <iostream>

template <typename T>
T average(T* array, int length) {
  T result = 0;
  for(int i = 0; i < length; ++i) {
    result += array[i];
  }
  result /= length;
  return result;
}

int main() {
  int arr1[] = { 5, 3, 2, 1, 4 };
  int avg1 = average(arr1, 5);
  std::cout << "Average of Array 1: " << avg1 << '\n';

  double arr2[] = { 3.12, 3.45, 9.23, 6.34 };
  double avg2 = average( arr2, 4);
  std::cout << "Average of Array 2: " << avg2 << '\n';
  return 0;
}
