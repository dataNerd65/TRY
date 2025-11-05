#include<iostream>
#include<vector>
#include<algorithm>

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

// bool isPrime(long long  n){
// 	if(n <= 1) return false;
// 	if(n <= 3) return true;
// 	if(n % 2 == 0 || n % 3 == 0) return false;

// 	// checking upto sqrt(n)
// 	for(long long i = 5; i * i <=n; i+=6){
// 		if(n % i == 0 || n % (i + 2) == 0)
// 			return false;
// 	}
// 	return true;
// }

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int n; 
	std::cin>>n;

	std::vector<int> divisors;
	for(int i = 1; i * i <= n; ++i){
		if(n % i == 0){
			divisors.push_back(i);
			if(i != n / i){
				divisors.push_back(n / i);
			}
		}
	}
	std::sort(divisors.begin(), divisors.end());
	std::vector<int> primes = sieve(n / 2);
	int count = 0;
	for(int i: divisors){
		if(std::find(primes.begin(), primes.end(), i) != primes.end()){
			count++;
		}
	}
	std::cout<<count<<"\n";

	return 0;
}