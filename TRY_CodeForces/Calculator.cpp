#include<iostream>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int a, b;
	char sign;
	std::cin>>a>>sign>>b;

	if(sign == '+'){
		std::cout<<a + b<<"\n";
	}else if(sign == '-'){
		std::cout<<a - b<<"\n";
	}else if(sign == '*'){
		std::cout<<a * b<<"\n";
	}else{
		std::cout<<a / b<<"\n";
	}

	return 0;
}