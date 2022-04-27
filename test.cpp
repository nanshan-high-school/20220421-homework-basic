#include <vector>
using namespace std;

int findOdd(vector<int> numbers){
 int basic = 0;
  
  for(unsigned long i = 0 ; i < numbers.size() ; i++){
    int count = 0;
    basic = numbers[i];
    for(unsigned long j = 0 ; j < numbers.size() ; j++){
      if(numbers[j] == basic){
        count += 1;
      }
    }
    if(count % 2 != 0){
      return basic;
    }
  }
}