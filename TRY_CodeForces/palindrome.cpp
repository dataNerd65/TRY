#include<iostream>

bool isPalindrome(int x){
	 if(x >= 0 && x < 10)return true; 
	 if(x < 0) return false;
	 if(x % 10 == 0) return false;

	 int revhalf = 0;
	 while(x > revhalf){
	 	revhalf = revhalf * 10 + x % 10;
	 	x /= 10;
	 }
	 if((revhalf == x) || (revhalf / 10 == x)){
	 	return true;
	 }
	 return false;
}
int reverse(int n){
	int rev = 0;
	while(n > 0){
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	return rev;
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int n; 
	std::cin>>n;

	std::cout<<reverse(n)<<"\n";
	std::cout<< ((isPalindrome(n)) ? "YES" : "NO")<<"\n";

	return 0;
}