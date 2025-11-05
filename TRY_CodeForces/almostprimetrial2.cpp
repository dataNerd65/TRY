#include<iostream>
#include<vector>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int n;
	std::cin>>n;
	std::vector<int> count(n + 1);

	for(int p = 2; p<=n; ++p){
		if(count[p] == 0){
			for(int multiple = p; multiple <= n; multiple += p){
				count[multiple]++;
			}
		}
	}
	int ans = 0;
	for(int i = 1; i <= n; ++i){
		if(count[i] == 2) ans++;
	}
	std::cout<<ans<<'\n';

	return 0;
}