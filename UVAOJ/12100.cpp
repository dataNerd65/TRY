#include<iostream>
#include<deque>
#include<vector>

// helper for(0(n))run on the short deque
bool is_front_maxi(std::deque<int> & q){
  int front = q.front();
  for(int i  = 0; i < (int)q.size(); ++i){
    if(q[i] > front){
      return false;
    }
  }
  return true;
}

void solve(){
    int n, m; // n no. of jobs, m position of yourjob 0<=m>=n- 1
    std::cin>>n>>m;

    std::deque<int> priorities;
    std::deque<int> pos; // to track positions
    for(int i = 0; i < n; ++i){
        int ns;
        std::cin>>ns; 
        priorities.push_back(ns);
        pos.push_back(i);
    }

    int count = 0;
    while(true){
      if(!is_front_maxi(priorities)){ // o(n^2)
        // rotate
        int p = priorities.front();
        priorities.push_back(p);
        priorities.pop_front();

        pos.push_back(pos.front());
        pos.pop_front();
      }else{
        // process
        int processed_pos = pos.front();
        priorities.pop_front();
        pos.pop_front();
        count++;

        if(processed_pos == m){
           std::cout<<count<<"\n";
           return;
        }
      }
    }

}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    // soln here 
    int t;
    std::cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}