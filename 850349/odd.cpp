#include <iostream>
#include <vector>
using namespace std;
int odd(vector <int>);
int n = 0, ans = 0;
int numbers = 0;

int main() {
  vector <int> num;
  cout << "輸入一個整數串列(輸入0停止)\n";
  while(true){
    
    cin >> numbers;
    if(numbers != 0){
      num.push_back(numbers);
    }else{
      cout << "答 : ";
      cout << odd(num) << "\n";
      break;
    }
  }
}

int odd(vector <int> num){
  for(int i = 0; i < num.size(); i++){
    n = 0;
    for(int k = 0; k < num.size(); k++){
      if(num[i] == num[k]){
        n += 1;
      }
    }
    if(n % 2 != 0){
      ans = num[i];
    }
  }
  return ans;
}