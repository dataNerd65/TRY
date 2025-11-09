#include<iostream>

bool isPrime(int n){
	if(n < 2) return false;
	if(n <= 3) return true;
	if(n % 2 == 0 || n % 3 == 0) return false;

	for(int p = 5; p * p <= n; p += 6){
		if(n % p == 0 || n % (p + 2) == 0) return false;
	}
	return true;
}
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here

	int t;
	std::cin>>t;

	while(t--){
		int n;
		std::cin>>n;

		std::cout<<((isPrime(n)) ? "YES" : "NO")<<"\n";
	}

	return 0;
}