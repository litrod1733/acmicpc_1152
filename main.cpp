//
// Created by 이인성 on 2021/08/12.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<char> str;
  char c;
  int cnt = 0;
  while(1) {
    scanf("%c", &c);
    if(c == '\n')
      break;
    str.push_back(c);
  }
  int n = str.size();
  for(int i=0; i<n; i++) {
    if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
      if((str[i+1] == ' ') || (i == n-1)) {
        cnt++;
      }
    }
  }
  cout << cnt << endl;
  return 0;
}