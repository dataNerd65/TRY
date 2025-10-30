#include<iostream>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	char c;
	std::cin>>c;

	if(c == 'z'){
		std::cout<<'a'<<"\n";
	}else{
		std::cout<< (char) (+c + 1)<<"\n";
	}

	return 0;
}