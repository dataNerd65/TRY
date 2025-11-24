#include<iostream>
#include<deque>

bool is_front_maxi(std::deque<int>& q){
    int front = q.front();

    for(int i = 0; i < (int)q.size(); ++i){
        if(q[i] > front) {
            return false;
        }
    }
    return true;
}

void solve(){
    int n, m;
    std::cin>>n>>m;

    std::deque<int> priorities;
    std::deque<int> pos;
    for(int i = 0; i < n; ++i){
        int ns;
        std::cin>>ns;
        priorities.push_back(ns);
        pos.push_back(i);
    }
    int count = 0;
    while(true){
        if(!is_front_maxi(priorities)){ // errorsome
            priorities.push_back(priorities.front());
            priorities.pop_front();

            pos.push_back(pos.front());
            pos.pop_front();
        }else{
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