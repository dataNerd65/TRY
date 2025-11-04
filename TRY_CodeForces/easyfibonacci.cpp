#include<iostream>
#include<vector>

std::vector<int> fibonacci(int n){
	std::vector<int> memo(n + 1);
	if(n >= 0) memo[0] = 0;
	if(n >= 1) memo[1] = 1;


	for(int i = 2; i <= n; ++i){
		memo[i] = memo[i - 1] + memo[i - 2];
	}
	return memo;
	
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int n;
	std::cin>>n;

	std::vector<int> memo = fibonacci(n);

	for(int i = 0; i < n; ++i){
		std::cout<<memo[i]<<" ";
	}
	std::cout<<"\n";

	return 0;
}