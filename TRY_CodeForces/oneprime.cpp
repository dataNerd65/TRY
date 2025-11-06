#include<iostream>

bool isprime(int n){
	if(n < 2) return false;

	for(long long i = 2; i * i <= n; ++i){
		if(n % i == 0) return false;
	}
	return true;
}
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int x;
	std::cin>>x;

	std::cout<<((isprime(x)) ? "YES": "NO")<<"\n";

	return 0;
}