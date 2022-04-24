#include <vector>

using namespace std;

int findOdd(const std::vector<int>& numbers){
  int num = 0;
  for(int i = 0; i < numbers.size(); i++) {
    num = num ^ numbers[i];
  }
  return num;
}