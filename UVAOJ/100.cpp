#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#define ll long long

// Apublic memo, is it feasible for memory across testcases
std::map<ll, int> memo;

int calculateCycleLength(ll n){
    if(n == 1) return 1; // base case

    if(memo.count(n)) return memo[n]; // is n memoized, if so, return its content

    int currentCycleLength;
    if(n % 2 == 0){
        currentCycleLength = 1 + calculateCycleLength(n / 2);
    }else{
        currentCycleLength = 1 + calculateCycleLength(3 * n + 1);
    }
    // store calculated cyclelength in memo table
    memo[n] = currentCycleLength;
    return currentCycleLength;

}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    // soln here 
    ll i, j;
    while(std::cin>>i>>j){
        ll start = std::min(i, j);
        ll end = std::max(i, j);
        int maxCyclelength = 0;

        for(int k = start; k <= end; ++k){
            maxCyclelength = std::max(maxCyclelength, calculateCycleLength(k));
        }
        std::cout<<i<<" "<<j<<" "<<maxCyclelength<<"\n";
    }
    
    return 0;
}