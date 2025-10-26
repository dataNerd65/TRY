#include<iostream>
#include<vector>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	std::vector<long long> vec;
	int n;
	std::cin>>n;

	for(int i = 0; i < n; ++i){
		long long p;
		vec.push_back(p);
	}
	// sorting
	std::sort(vec.begin(), vec.end());

	std::cout<<vec[0]<<"\n";

	return 0;
}