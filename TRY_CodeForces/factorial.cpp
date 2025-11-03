#include<iostream>

long long factorial(int n){
	if(n <= 1) return 1;

	return n * factorial(n - 1);
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int t;
	std::cin>>t;

	while(t--){
		int n;
		std::cin>>n;

		std::cout<<factorial(n)<<"\n";
	}

	return 0;
}