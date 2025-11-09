#include<iostream>
#include<bits/stdc++.h>

void ntimes(int n, char& c){
	for(int i = 0; i < n; ++i){
		std::cout<< c <<" ";
	}
	std::cout<<"\n";
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here

	int t;
	std::cin>>t;

	while(t--){
		int n;
		char c;
		std::cin>>n>>c;
		// call fn here
		ntimes(n, c);
	}

	return 0;
}