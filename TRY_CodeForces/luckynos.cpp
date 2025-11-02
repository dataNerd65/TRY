#include<iostream>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here

	int n;
	std::cin>>n;

	if(n % 10 == 0){
		std::cout<<"YES"<<"\n";
		return 0;
	}

	int firstNo = n % 10;
	n /= 10;

	if(n % firstNo == 0 || firstNo % n == 0){
		std::cout<<"YES"<<"\n";
	}else{
		std::cout<<"NO"<<"\n";
	}

	return 0;
}