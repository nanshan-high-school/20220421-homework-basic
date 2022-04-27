#include <vector>
using namespace std;
int findOdd(const vector<int> numbers){
  int d=0;
  int b=numbers.size();
  for(int i=0;i<b;i++){
    int a=0;
    for (int c=0;c<b;c++){
    if (numbers[i]==numbers[c]){
          a+=1;
        }
      }
      if (a%2!=0){
      d=numbers[i];
    }
  }
return d;
}