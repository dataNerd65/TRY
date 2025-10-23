#include<iostream>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	std::string first, last, first1, last2;
	std::cin>>first>>last;
	std::cin>>first1>>last2;

	std::cout<<((last == last2) ? "ARE Brothers" : "NOT")<<"\n";


	return 0;
} // poor varable naming