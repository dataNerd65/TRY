#include<iostream>
#include<vector>

bool islucky(int n){
	while(n > 0){
		int digit = n % 10;
		if(digit != 7 && digit != 4) return false;
		n /= 10;
	}
	return true;
}
// DFS to find luckynos upto a certain limit
void generate(long long current, long long limit, std::vector<long long>& lucky){
	if(current > limit) return;
	if(current != 0) lucky.push_back(current);
	generate(current * 10 + 4, limit, lucky);
	generate(current * 10 + 7, limit, lucky);
}
bool isNearlyLucky(int n, const std::vector<long long>& luckys){
	for(long long i : luckys){
		if(n % i == 0) return true;
	}
	return false;
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int n;
	std::cin>>n;
	std::vector<long long> luckys;
	generate(0, 1000, luckys);


	if(islucky(n) || isNearlyLucky(n, luckys)){
		std::cout<<"YES"<<"\n";
	}else{
		std::cout<<"NO"<<"\n";
	}

	return 0;
}