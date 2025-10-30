#include<iostream>
#include<algorithm>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int n;
	std::cin>>n;

	int maxi = INT32_MIN;
	while(n--){
		int x;
		std::cin>>x;

		maxi = std::max(maxi, x);
	}
	std::cout<<maxi<<"\n";


	return 0;
}