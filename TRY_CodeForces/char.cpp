#include<iostream>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	char c;
	std::cin>>c;

	if(+c >= 65 && +c <= 90){
		std::cout<< char(32 + (+c))<<"\n";
	}else{
		std::cout<< char((+c) - 32)<<"\n";
	}

	

	return 0;
}