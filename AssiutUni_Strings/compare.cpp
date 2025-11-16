#include<iostream>
#include<algorithm>
#include<string>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	std::string str1;
	std::string str2;

	std::cin>>str1;
	std::cin>>str2;

	std::cout<<std::min(str1, str2)<<"\n";

	return 0;
}