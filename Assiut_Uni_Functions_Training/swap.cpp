#include<iostream>

void swap(int a, int b){
	int first = a;
	int second = b;

	std::cout<<second<<" "<<first<<"\n";
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here

	int x, y;
	std::cin>>x>>y;

	swap(x , y);

	return 0;
}