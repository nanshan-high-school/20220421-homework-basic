#include <iostream>
#include <vector>
using namespace std;
int main() {
  std::vector<int> humanYearsCatYearsDogYears(int humanYears) {
  vector <int> years;
  int sumc = 0;
  int sumd = 0;
  if (humanYears >= 1){
    sumc += 15;
    sumd += 15;
  }if (humanYears >= 2){
    sumc += 9;
    sumd += 9;
  }if(humanYears >= 3){
    sumc += (humanYears - 2) * 4;
    sumd += (humanYears - 2) * 5;
  }
  years = {humanYears , sumc , sumd};
  return years ;  
}
}
