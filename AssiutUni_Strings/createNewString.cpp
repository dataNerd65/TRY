#include<iostream>
#include<string>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	std::string str_1;
	std::string str2;

	std::cin>>str_1;
	std::cin>>str2;

	std::cout<<str_1.size()<<" "<<str2.size()<<"\n";
	std::cout<<str_1<<" "<<str2<<"\n";

	return 0;
}