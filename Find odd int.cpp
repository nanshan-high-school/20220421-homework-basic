include <iostream>
#include <vector>
using namespace std;

int findOdd(const std::vector<int>& numbers){
  for (int number : numbers){
    if (count(numbers.begin(), numbers.end(), number) % 2 != 0){
      return number;
    }
  }
}
