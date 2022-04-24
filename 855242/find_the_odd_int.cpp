#include <vector>
using namespace std;

int findOdd(const vector<int>& numbers){
  int max, min;
  max = numbers.front();
  min = numbers.front();
  
  for (int i : numbers) {
    if (i > max) {
      max = i;
    }
    if (i < min) {
      min = i;
    }
  }

  int *ptr;
  ptr = new int[max - min + 1];
  
  for (int i = 0; i < (max - min + 1); i++) {
      *(ptr + i) = 0;   
  }

  for (int i : numbers) {
    *(ptr + i - min) += 1;
  }

  for (int i = 0; i < (max - min + 1); i++) {
    if (*(ptr + i) % 2 == 1) {
      return i + min;
    }
  }
}
