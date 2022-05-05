#include <vector>
using namespace std;
int findOdd(const vector<int>& numbers){
  int target = 0;
  for (int i = 0;i < numbers.size();i++) {
    int times = 0;
    target = numbers[i];
    for (int j = 0;j < numbers.size() ;j++ ){
      if (numbers[j] == target) {
        times ++ ;
      }
    }
    if(times % 2 != 0){
      return target;
      
    }
    
    
  }
}