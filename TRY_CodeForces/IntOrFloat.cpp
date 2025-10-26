#include<iostream>
#include<cmath> // static_cast

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	double input;
	std::cin>>input;
	double det = input - static_cast<int>(input);

	if(det == 0){
		std::cout<<"int "<< static_cast<int>(input)<<"\n";
	}else{
		std::cout<<"float "<< static_cast<int>(input)<<" "<< det<<"\n";
	}

	return 0;
}