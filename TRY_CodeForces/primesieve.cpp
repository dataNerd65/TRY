#include<iostream>
#include<vector>

std::vector<int> sieve(int n){
	std::vector<bool> prime(n, true);
	prime[0] = prime[1] = false;

	for(int p = 2; p * p <= n; ++p){
		if(prime[p]){
			for(int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}
	std::vector<int> primes;
	for(int i = 2; i <= n; ++i){
		if(prime[i]) primes.push_back(i);
	}
	return primes;

}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int n;
	std::cin>>n;
	std::vector<int> vec = sieve(n);

	std::cout<<vec.size()<<"\n";

	for(int i = 0; i < vec.size(); ++i){
		std::cout<<vec[i]<<" ";
	}
	std::cout<<"\n";

	return 0;
}