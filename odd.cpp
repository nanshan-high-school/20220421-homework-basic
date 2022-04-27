#include <vector>
using namespace std;
int findOdd(const vector<int> numbers){
  int x = 0,ans = 0;
  for(int i = 0 ; i < numbers.size() ; i++){
    x=0;
    for (int j = 0 ;j < numbers.size() ; j++){
    if (numbers[i] == numbers[j]){
          x += 1;
        }
      }
      if (x % 2 != 0){
      ans=numbers[i];
    }
  }
return ans;
}
