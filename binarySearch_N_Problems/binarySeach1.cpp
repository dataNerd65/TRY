#include<iostream>
#include<vector>

bool isPresent(const std::vector<int>& vec, int query){
	int left = 0;
	int right = vec.size() - 1;

	while(left <= right){
		int mid = left + (right - left) / 2; // avoids overflow

		if(vec[mid] == query)
			return true;
		else if(vec[mid] > query){
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
	int n, k;
	std::cin>>n>>k;

	std::vector<int> vec;
	vec.reserve(n);

	while(n--){
		int element;
		std::cin>>element;
		vec.push_back(element);
	}

	while(k--){
		int query;
		std::cin>>query;
		// the binary operation, done well using a fn, stream based processing
		std::cout<<((isPresent(vec, query)) ? "YES" : "NO")<<"\n";
	}

	return 0;
}