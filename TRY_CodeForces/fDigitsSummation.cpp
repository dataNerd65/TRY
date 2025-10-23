#include<iostream>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	long long n, m;
	std::cin>>n>>m;

	int a = n % 10;
	int b = m % 10;

	std::cout<<a + b<<"\n";

	return 0;
}