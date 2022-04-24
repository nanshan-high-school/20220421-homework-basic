#include <vector>
using namespace std;

int findOdd(const vector<int>& numbers){
  int finder;
  for (unsigned long i = 0; i < numbers.size(); i++) {
    int counter = 0;
    finder = numbers[i];
    for (unsigned long j = 0; j < numbers.size(); j++) {
      if (finder == numbers[j]) {
        counter++;
      }
    }
    if(counter % 2 == 1) {
      return finder;
    }
  }
}
