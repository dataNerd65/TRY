#include<iostream>
#include<vector>
#include<algorithm>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int t;
	std::cin>>t;

	while(t--){
		int n;
		std::cin>>n;

		std::vector<long long> vec(n);

		for(int i = 0; i < n; ++i){
			std::cin>>vec[i];
		}

		long long x;
		std::cin>>x;

		auto mn = min_element(vec.begin(), vec.end());
		auto mx = max_element(vec.begin(), vec.end());

		if(x >= *mn && x <= *mx){
			std::cout<<"YES"<<"\n";
		}else{
			std::cout<<"NO"<<"\n";
		}

	}

	return 0;
}