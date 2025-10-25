#include<iostream>
#include<algorithm>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int a, b, c;
	std::cin>>a>>b>>c;

	auto result = std::minmax({a, b, c});

    int mid = (a + b + c) - (result.first + result.second);

    std::cout<<result.first << "\n"
    		<<	mid <<"\n"
    		<<	result.second <<"\n";
    std::cout<<"\n";
    std::cout<<a <<"\n"
    		<<	b <<"\n"
    		<<	c <<"\n";


	return 0;
}