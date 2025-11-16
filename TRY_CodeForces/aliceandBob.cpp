#include<iostream>
#include<vector>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int t;
	std::cin>>t;

	while(t--){
		int n, a;
		std::cin>>n>>a;

		int small = 0; int bigger = 0;
		for(int i = 0; i < n; ++i){
			int x;
			std::cin>> x;
			if(x < a){
				small++;
			}else if(x > a){
				bigger++;
			}
		}
		if(small >= bigger){
			std::cout<<a - 1<<"\n";
		}else std::cout<< a + 1<<"\n";
	}

	return 0;
}