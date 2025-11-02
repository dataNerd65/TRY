#include<iostream>

bool isLucky(int n){
	if(n <= 0) return false;
	while(n > 0){
		int digit = n % 10;
		n /= 10;
		if(digit != 4 && digit != 7){
			return false;
		}
	}
	return true;
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int a, b;
	std::cin>>a>>b;

	bool found = false;
	for(int i = a; i <= b; ++i){
		if(isLucky(i)){
			std::cout<<i<<" ";
			found = true;
		}
	}

	if(!found){
		std::cout<<-1<<"\n";
	}


	return 0;
}