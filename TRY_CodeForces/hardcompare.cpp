#include<iostream>
#include<cmath>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	long long A, C, powA, powC;
	std::cin>>A>>powA>>C>>powC;

	std::cout<<((std::pow(A, powA) > std::pow(C, powC)) ? "Yes" : "NO")<<"\n";

	return 0;

/*not solved*/