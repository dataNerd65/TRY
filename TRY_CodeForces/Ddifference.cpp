#include<iostream>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	long long a, b, c, d;
	std::cin>>a>>b>>c>>d;

	long long result = (a * b) - (c * d);
	std::cout<<"Difference = "<<result<<"\n";

	return 0;
}