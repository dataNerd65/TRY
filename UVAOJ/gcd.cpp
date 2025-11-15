#include<iostream>

int gcd(int a, int b){
	if(b == 0) return a;

	else return gcd(b, a % b);
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here

	int n;
	while(std::cin>>n && n != 0){
		int G = 0;

		for(int i = 1; i < n; ++i){
			for(int j = i + 1; j <= n; ++j){
				G += gcd(i, j);
			}
		}
		std::cout<<G<<"\n";
	}

	return 0;
}