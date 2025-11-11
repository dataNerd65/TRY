#include<iostream>
#include<algorithm>
#include<vector>

std::vector<int> getCountDivisors(std::vector<int>& vec, int n){
	std::vector<int> divisorCount;
	for(int ele : vec){
		int divisorCounter = 0;
		for(long long i = 1; i * i <= ele; ++i){
			if(ele % i == 0){
				divisorCounter++;
				if(i != ele / i) divisorCounter++;
			} 			
		}
		divisorCount.push_back(divisorCounter);
	}
	return divisorCount;
}

bool isPalindrome(int n){
	if(n >= 0 && n < 10) return true;
	if(n < 0) return false;

	int revhalf = 0;

	while(revhalf < n){
		int digit = n % 10;
		revhalf = revhalf * 10 + digit;
		n /= 10;
	}
	if(revhalf == n || revhalf / 10 == n){
		return true;
	} 

	return false;
}
void maxmin(std::vector<int>& vec){
	auto mnmx = std::minmax_element(vec.begin(), vec.end());

	std::cout<<"The maximum number : "<<*mnmx.second<<"\n";
	std::cout<<"The minimum number : "<<*mnmx.first<<"\n";
}

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
	int n; 
	std::cin>>n;

	std::vector<int> vec(n);

	for(int i = 0; i < n; ++i){
		std::cin>> vec[i];
	}
	maxmin(vec);

	int count = 0;
	int countPalindromes = 0;
	for(int i : vec){
		if(isPrime(i)){
			count++;
		}
		if(isPalindrome(i)){
			countPalindromes++;
		}
	}
	std::cout<<"The number of prime numbers : "<<count<<"\n";
	std::cout<<"The number of palindrome numbers : "<<countPalindromes<<"\n";

	std::vector<int> divisorCount;
	divisorCount.reserve(n);

	divisorCount = getCountDivisors(vec, n);

	

	return 0;
}