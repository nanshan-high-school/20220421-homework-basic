using namespace std;
#include<string>
vector<int> 
solve(string s){
  vector<int> answer {0,0,0,0};
  for(int i = 0; i < s.size(); i++){
    if ('A' <= s[i] && s[i] <= 'Z'){
      answer[0]++;
    }else if ('a' <= s[i] && s[i] <= 'z'){
      answer[1]++;
    }else if ('0' <= s[i] && s[i] <= '9'){
      answer[2]++;
    }else if ('!' <= s[i] && s[i] <= '@'){
      answer[3]++;
    }
  }
  return answer;
}

