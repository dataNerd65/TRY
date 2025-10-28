#include<iostream>

int gcd(int a, int b){
	if(b == 0)
		return a;
	return gcd(b, a % b);
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	int a, b;
	std::cin>>a>>b;

	std::cout<<(a / gcd(a, b)) * b<<"\n"; //avoiding overflow



	return 0;
}