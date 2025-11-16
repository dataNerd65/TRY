#include<iostream>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	long long sum;
	for(int i = 1; i <= 1000; ++i){
		if(i % 3 == 0 || i % 5 == 0){
			sum += i;
		}
	}
	std::cout<<sum<<"\n";

	return 0;
}