#include<bits/stdc++.h>

bool isPresent(std::vector<int>& vec, int query){
	int left = 0;
	int right = vec.size() - 1;

	while(left <= right){
		int mid = left + (right - left) / 2;

		if(vec[mid] == query){
			return true;
		}else if(vec[mid] > query){
			right = mid - 1;
		}else{
			left = mid + 1;
		}
	}
	return false;
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int n, q;
	std::cin>>n>>q;

	std::vector<int> vec;
	vec.reserve(n);

	for(int i = 0; i < n; ++i){
		int a;
		std::cin>>a;
		vec.push_back(a);
	}
	// never assume is sorted unless told so
	std::sort(vec.begin(), vec.end());
	while(q--){
		int query;
		std::cin>>query;

		std::cout<<((isPresent(vec, query)) ? "found" : "not found") <<"\n";
	}

	return 0;
}