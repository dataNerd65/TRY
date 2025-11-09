#include<iostream>
#include<cmath>


bool isPalindrome(int n){
	int revhalf = 0;
	
	while(revhalf < n){
		int digit = n % 10;
		revhalf = revhalf * 10 + digit;
		n /= 10;
	}

	if(revhalf == n || revhalf / 10 == n){
		return true;
	}else{
		return false;
	}
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int n; 
	std::cin>>n;

	long long number = 0;
	for(int i = 0; i < n; ++i){
		int x;
		std::cin>>x;
		int digit =std::log10(x) + 1;
		number = number * std::pow(10, digit) + x;
	}

	std::cout<<((isPalindrome(number)) ? "YES" : "NO");


	return 0;
}
// WA