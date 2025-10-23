#include<iostream>
#include<cmath>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	double a, b;
	std::cin>>a>>b;
	double result = a / b;

	std::cout<<"floor "<<a<<" / "<<b<<" = "<<std::floor(result)<<"\n";
	std::cout<<"ceil "<<a<<" / "<<b<<" = "<<std::ceil(result)<<"\n";
	std::cout<<"round "<<a<<" / "<<b<<" = "<<std::round(result)<<"\n";

	return 0;
}