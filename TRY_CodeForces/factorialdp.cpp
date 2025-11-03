#include<iostream>
#include<vector>

long long factorial(int n, std::vector<long long>& factTable){
	if(n <= 1) return 1;

	factTable[0] = 0; 
	factTable[1] = 1;

	for(int i = 2; i <= n; ++i){
		factTable[i] = i * factTable[i - 1];
	}
	return factTable[n];
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
		std::cin>>n;
		std::vector<long long> factTable(n + 1);

		std::cout<<factorial(n, factTable)<<"\n";
	}


	return 0;
}