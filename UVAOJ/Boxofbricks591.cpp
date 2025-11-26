#include<iostream>
#include<vector>

int casey = 1;
bool solve(){
    int n;
    std::cin>>n;

    if(n == 0) return false; // breaking spot

    std::vector<int> vec(n);
    int sum = 0;
    for(int i = 0; i < n; ++i){
        std::cin>>vec[i];
        sum += vec[i];
    }
    // for(auto& i: vec){
    //     std::cout<<i<<" ";
    // }
    // std::cout<<"\n";
    int avg = sum / n;

    int count = 0;
    for(auto& i : vec){
        if(i != avg) count++;
    }

    std::cout<<"Set #"<<casey++<<"\n";
    std::cout<<"The minimum number of moves is "<<count<<"."<<"\n";
    std::cout<<"\n";
    return true;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    // soln here 
    while(solve()){
        // while solve is true and runs. solve returns bool
    }
    
    return 0;
}