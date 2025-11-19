#include<iostream>
#include<string>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	std::string strA, strB;

	std::cin>> strA;
	std::cin>> strB;

	std::cout<<strA.size()<<" "<<strB.size()<<"\n";
	std::cout<<strA + strB<<"\n";
	std::cout<< strB[0] + strA.substr(1)<<" "<<strA[0] + strB.substr(1)<<"\n";
	return 0;
}