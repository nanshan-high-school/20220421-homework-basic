#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>
using namespace std;
int queueTime(vector<int>,int);

int main() {
  vector <int> customers;
  int num;
  int y = 1;
  while(true){ 
    if(y != 0){
      cin >> y;
      customers.push_back(y);
    }else{
      cin >> num;
      cout << queueTime(customers, num);
      break;
    }
  }
}
int queueTime(vector<int> time, int num){
  queue <int> fin;
  for(int i = 0; i < time.size(); i++){
    fin.push(i);
  }

  vector <int> n;
  for(int j = 0; j < num; j++){
    n[j] = fin.front();
    fin.pop();
  }
  for(int g = 0; g < fin.size(); g++){
    for(int k = 0; k < fin.size(); k++){
      sort(n.begin(), n.end());
      n.begin() += fin.front();
      fin.pop();
    }
  }
  int ans = 0;
  for(int h = 0; h < n.size(); h++){
    ans = n[h];
  }
  return ans;
}