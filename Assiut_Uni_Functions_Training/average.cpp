#include<iostream>
#include<iomanip>

double average(double sum, int n){
	return sum / n;
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here

	int n;
	std::cin>>n;

	double sum = 0;
	for(int i = 0; i < n; ++i){
		double a;
		std::cin>>a;

		sum += a;
	}

	std::cout<<std::fixed<<std::setprecision(6)<<average(sum, n)<<"\n";


	return 0;
}