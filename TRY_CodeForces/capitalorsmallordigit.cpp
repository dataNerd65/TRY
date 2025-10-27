#include<iostream>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	char c;
	std::cin>>c;

	if(+c >= 65 && +c <= 90 ){
		std::cout<<"ALPHA"<<'\n';
		std::cout<<"IS CAPITAL"<<"\n";
	}else if(+c >= 97 && +c <= 122){
		std::cout<<"ALPHA"<<"\n";
		std::cout<<"IS SMALL"<<"\n";
	}else{
		std::cout<<"IS DIGIT"<<"\n";
	}

	return 0;
}
// ASCII