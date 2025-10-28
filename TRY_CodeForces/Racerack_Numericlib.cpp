#include<iostream>
#include<numeric> // cpp 17 and later

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int a, b;
	std::cin>>a>>b;
	std::cout<<std::lcm(a, b)<<"\n";

	return 0;
}