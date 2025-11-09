#include<iostream>
#include<vector>
#include<algorithm>

void maxMin(std::vector<int>& vec){
	auto res = std::minmax_element(vec.begin(), vec.end());
	std::cout<<*res.first<<" "<<*res.second<<"\n";
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int n;
	std::cin>>n;

	std::vector<int> vec(n);
	for(int i = 0; i < n; ++i){
		int x;
		std::cin>> vec[i];
	}

	maxMin(vec);

	return 0;
}