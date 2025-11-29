#include<iostream>
#include<vector>

void solve(){
    int n;
    std::cin>>n;

    std::vector<int> vec(n);
    for(int i = 0; i < n; ++i){
        std::cin>> vec[i];
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    // soln here 
    solve();
    
    return 0;
}