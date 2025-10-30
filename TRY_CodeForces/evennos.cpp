#include<iostream>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int n;
	std::cin>> n;

	if(n < 2){
		std::cout<<-1<<"\n";
	}

	for(int i = 1; i <= n; ++i){
		if(i % 2 == 0){
			std::cout<<i<<"\n";
		}
	}

	return 0;
}