#include<iostream>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int t;
	std::cin>>t;

	while(t--){
		long long n;
		std::cin>>n;
		if(n == 0) std::cout<<0<<"\n";

		while(n > 0){
			int digit = n % 10;
			n /= 10;
			std::cout<<digit<<" ";
		}
		std::cout<<"\n";
	}
	

	return 0;
}