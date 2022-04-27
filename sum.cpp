#include <vector>
#include <iostream>
using namespace std;
int digital_root(int n)
{
  int sum = 0 ;
  int a = 0;
  while (sum < 10) {
    sum += n /10;
  }
  if (sum >= 10){
    while (a < 10){
      a += sum % 10;
    }
    return a;
  }
  else{
    return sum;
  }
}