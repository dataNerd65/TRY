#include<iostream>
#include<vector>
#include<numeric> // for accumulate

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here

	int n;
	std::cin>>n;

	std::vector<int> vec;
	vec.reserve(n);

	for(int i= 0; i < n; ++i){
		long long a;
		std::cin>>a;
		vec.push_back(a);
	}
	long long sum = std::accumulate(vec.begin(), vec.end(), 0LL);

	if(sum > 0){
		std::cout<<sum<<"\n";
	}else{
		std::cout<<sum * -1<<"\n";
	}


	return 0;
}