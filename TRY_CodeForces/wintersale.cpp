#include<iostream>
#include<iomanip>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	double x ,p;
	std::cin>>x>>p;
 
	std::cout<<std::fixed<<std::setprecision(2)<< (p * 100) / (100 - x)<<"\n";

	return 0;
}