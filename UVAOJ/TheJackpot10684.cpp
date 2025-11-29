#include<iostream>
#include<vector>
#include<algorithm>

void solve(){
    int n;
    while(std::cin>>n && n != 0){
        // ops
        std::vector<int> a(n);

        for(int i = 0; i < n; ++i){
            std::cin>> a[i];
        }

        // main ops
        long long current_max = 0;
        long long global_max = 0;

        for(int i = 0; i < n; ++i){
            current_max += a[i];
            if(current_max < 0){
                current_max = 0;
            }
            global_max = std::max(global_max, current_max);
        }
        if(global_max <= 0){
            std::cout<<"Losing streak."<<"\n";
        }else{
            std::cout<<"The maximum winning streak is "<<global_max<<"."<<"\n";
        }
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