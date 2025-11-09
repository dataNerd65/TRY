#include<iostream>

void printSum(int a, int b){
	std::cout<< a + b <<"\n";
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int x, y;
	std::cin>>x>>y;

	printSum(x, y);

	return 0;
}