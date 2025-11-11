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
		int n; 
		std::cin>>n;

		std::vector<int> vec(n);

		for(int i = 0; i < n; ++i){
			std::cin>>vec[i];
		}
		bool found = false;

		for(int i = 0; i < n; ++i){
			for(int j = i + 1; j < n; ++j){
				int remainder = vec[j] % vec[i];
				if(vec[i] < vec[j] && remainder % 2 == 0){
					std::cout<<vec[i]<<" "<<vec[j]<<"\n";
					found = true;
					break;
				}
			}
			if(found) break;
		}
		if(!found){
			std::cout<<-1<<"\n";
		}
	}

	return 0;
}