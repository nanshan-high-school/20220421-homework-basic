#include <iostream>
#include <vector>
using namespace std;

unsigned int countBits(unsigned long long n) {
  cin >> n;
  vector<int> binary;
  for (int i = 0; n > 0; i++) {
    binary.push_back(n % 2);
    n = n / 2;
  }
  int counter = 0;
  for (int i = 0; i < binary.size(); i++) {
    if (binary[i] == 1) {
      counter++;
    }
  }
  return counter;
}
