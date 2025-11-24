#include<iostream>
#include<unordered_map>
#include<deque>
using std::deque;

int main(){
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  // soln here
  int t;
  while(std::cin>> t && t != 0){
    while(t--){
      int team = 0;
      int t_x;
      std::cin>>t_x;
      for(int i = 0; i < t_x; ++i){
        int x;
        std::cin>>x;
        teams_map[team] = x;
      }
      team++;
    }
  }

  return 0;
}