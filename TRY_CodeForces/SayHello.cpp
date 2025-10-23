#include<iostream>

int main(){
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::string str;
	std::cin>> str;
	std::cout<<"Hello, "<<str<<"\n";
	return 0;
}