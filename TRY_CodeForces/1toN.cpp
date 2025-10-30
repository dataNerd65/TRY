#include<iostream>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int n;
	std::cin>>n;

	int i = 0;
	while(n--){
		std::cout<< ++i <<"\n";
	}

	return 0;
}