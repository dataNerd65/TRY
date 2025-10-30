#include<iostream>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int n;
	std::cin>>n;

	for(int i = 1; i <= 12; ++i){
		std::cout<<n<<" * "<<i<<" = "<<n * i<<"\n";
	}

	return 0;
}