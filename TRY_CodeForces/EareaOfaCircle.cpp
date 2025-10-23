#include<iostream>
#include<iomanip> // this library houses iomanip

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	const double pi = 3.141592653;
	double r;
	std::cin>>r;

	double result = pi * r * r;
	std::cout<<std::setprecision(9)<<result<<"\n";

	return 0;
}