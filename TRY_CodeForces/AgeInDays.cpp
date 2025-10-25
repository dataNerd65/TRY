#include<iostream>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int n;
	std::cin>>n;

	int no_of_years = n / 365;
	int remainder = n % 365;

	int no_of_months = remainder / 30;
	int remainder_days = remainder % 30;

	std::cout<<no_of_years<<" years"<<"\n";
	std::cout<<no_of_months<<" months"<<"\n";
	std::cout<<remainder_days<<" days"<<"\n";


	return 0;
}