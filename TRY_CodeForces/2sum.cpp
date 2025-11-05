#include<iostream>
#include<vector>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int n; long long x;
	std::cin>>n>>x;

	std::vector<long long> vec;
	while(n--){
		long long a;
		std::cin>> a;
		vec.push_back(a);
	}

	for(int i = 1; i < vec.size(); ++i){
		for(int j = 0; j < i; ++j){
			if(vec[i] + vec[j] == x){
				std::cout<<"YES"<<"\n";
				return 0;
			}
		}
	}
	std::cout<<"NO"<<"\n";

	return 0;
}