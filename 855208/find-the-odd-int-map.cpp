#include <vector>
#include <map>

using namespace std;

int findOdd(const std::vector<int>& numbers){
  std::map<int, int> mapNumbers;
  for(int i = 0; i < numbers.size(); i++) {
    if(mapNumbers.find(numbers[i]) != mapNumbers.end()) {
      mapNumbers[numbers[i]]++;
    } else {
      mapNumbers[numbers[i]] = 1;
    }
  }
  
  for(auto iter = mapNumbers.begin(); iter != mapNumbers.end(); iter++) {
    if((iter->second) % 2 != 0) {
      return iter->first;
    }
  }
}