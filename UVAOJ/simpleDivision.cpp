#include<iostream>
#include<numeric>
#include<string>
#include<vector>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	std::string line;
	int gcd = 0; 

	while(getline(std::cin,line)){
		std::stringstream ss(line);
		int x;

		while(ss >> x){
			if(x == 0) break;
			vec.push_back(x);
		}

		

		for(int i = 2; i < n; ++i){
			gcd = std::gcd(())
		}
	}

	return 0;
}