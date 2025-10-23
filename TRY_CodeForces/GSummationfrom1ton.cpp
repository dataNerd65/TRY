#include<iostream>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	long long n;
	std::cin>>n;

	long long result = (n * (n + 1)) / 2;

	std::cout<<result<<"\n";

	return 0;
}