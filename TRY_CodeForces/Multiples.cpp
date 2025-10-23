#include<iostream>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int a , b;
	std::cin>>a>>b;

	std::cout<<((a % b == 0 || b % a == 0) ? "Multiples" : "No Multiples")<<"\n";

	return 0;
} // be keen
