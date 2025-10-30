#include<iostream>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	while(true){
		int input;
		std::cin>>input;
		if(input != 1999){
			std::cout<<"Wrong"<<"\n";
		}else if(input == 1999){
			std::cout<<"Correct"<<"\n";
			break;
		}
	}

	return 0;
}