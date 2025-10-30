#include<iostream>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	float x;
	std::cin>>x;

	if(x > 100 || x < 0){
		std::cout<<"Out of Intervals"<<"\n";
	}else if(x >= 0 && x <= 25){
		std::cout<<"Interval [0,25]"<<"\n";
	}else if(x > 25 && x <= 50){
		std::cout<<"Interval (25,50]"<<"\n";
	}else if(x > 50 && x <= 75){
		std::cout<<"Interval (50,75]"<<"\n";
	}else if(x > 75 && x <= 100){
		std::cout<<"Interval (75,100]"<<"\n";
	}

	return 0;
}