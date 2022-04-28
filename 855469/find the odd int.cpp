#include <vector>
#include <map>
using namespace std;
int findOdd(const vector<int>& numbers){
  map<int, int> times;
  for(int number: numbers){
    if (! times.count(number)){
      times[number] = 0;
    }
    times[number] += 1;
  }
  
  for(auto it = times.begin(); it != times.end(); it++){
    int i = it -> second;
    if (i%2 == 1){
      return it -> first;
    }
  }
}

