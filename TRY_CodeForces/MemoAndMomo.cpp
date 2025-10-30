#include<iostream>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	long long a, b, k;
	std::cin>>a>>b>>k;

	if(a % k == 0 && b % k == 0){
		std::cout<<"Both"<<"\n";
	}else if(a % k == 0 && b % k != 0){
		std::cout<<"Memo"<<"\n";
	}else if(a % k != 0 && b % k == 0){
		std::cout<<"Momo"<<"\n";
	}else{
		std::cout<<"No One"<<"\n";
	}

	return 0;
}