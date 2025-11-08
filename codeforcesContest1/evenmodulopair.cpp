#include<iostream>
#include<bits/stdc++.h>
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
		int size = n;
		std::vector<int> vec;
		vec.reserve(n);
		for(int i = 0; i < n; ++i){
			int element;
			std::cin>>element;
			vec.push_back(element);
		}
		bool found = false;
		for(int i = 0; i < n; ++i){
			for(int j = i + 1; j < n; ++j){
				if(vec[i] < vec[j] && (vec[j] % vec[i]) % 2 == 0){
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