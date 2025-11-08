#include<iostream>

bool isPrime(int n){
	if(n < 2) return false;
	if(n <= 3) return true;
	if(n % 2 == 0 || n % 3 == 0) return false;

	for(long long i = 5; i * i <= n; i += 6){
		if(n % i == 0 || n % (i + 2) == 0)
			return false;
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

	std::cout<<((isPrime(x)) ? "YES" : "NO")<<"\n";

	return 0;
}