#include<iostream>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	long long x, y;
	std::cin>>x>>y;

	std::cout<<x<<" "<<"+ "<< y<<" = "<<x + y<<"\n";
	std::cout<<x<<" "<<"* "<<y<<" = "<<x * y<<"\n";
	std::cout<<x<<" "<<"- "<<y<<" = "<<x - y<<"\n";
	return 0;
}