#include<iostream>
#include<bits/stdc++.h>

std::string toBits(int n){
	std::string bits = "";
	if(n == 0) return "0";

	while(n > 0){
		int digit = n % 2;
		n /= 2;
		std::string res = std::to_string(digit);
		bits += res;
	}
	std::reverse(bits.begin(), bits.end());
	return bits;
}

bool isPalindrome(std::string& bits){
	// two pointers
	int left = 0;
	int right = bits.size() - 1;

	while(left < right){
		if(bits[left]!= bits[right]) 
			return false;
		left++;
		right--;
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

	if(n % 2 == 0){
		std::cout<<"NO"<<"\n";
		return 0;
	}

	std::string res = toBits(n);

	if(isPalindrome(res)){
		std::cout<<"YES"<<"\n";
	}else{
		std::cout<<"NO"<<"\n";
	}

	return 0;
}