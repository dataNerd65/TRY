#include<iostream>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	float x, y;
	std::cin>>x>>y;

	if(x == 0 && y == 0){
		std::cout<<"Origem"<<"\n";
	}else if(x == 0 ){
		std::cout<<"Eixo Y"<<"\n";
	}else if(y == 0){
		std::cout<<"Eixo X"<<"\n";
	}

	if(x > 0 && y < 0){
		std::cout<<"Q4"<<"\n";
	}
	if(x > 0 && y > 0){
		std::cout<<"Q1"<<"\n";
	}
	if(x < 0 && y > 0){
		std::cout<<"Q2"<<"\n";
	}if(x < 0 && y < 0){
		std::cout<<"Q3"<<"\n";
	}

	return 0;
}