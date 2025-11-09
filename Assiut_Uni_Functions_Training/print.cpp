#include<iostream>

void printNos(int n){
	std::cout<<1;
	for(int i = 2; i <= n; ++i){
		std::cout<<" "<<i;
	}
	std::cout<<"\n";
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int n;
	std::cin>>n;

	printNos(n);

	return 0;
}