#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#define ll long long

ll get(std::vector<int> a){
	if(a.empty()) return 0;

	int len = a.size();

	int pos = (int) len / 2;
	ll val = 0;

	for(int i = 0; i < len; ++i){
		val += std::abs(a[pos] - a[i]) - std::abs(pos - i);
	}
	return val;
}

void solve(){
	int n;
	std::cin>>n;

	std::vector<int> a, b;

	for(int i = 1; i <= n; ++i){ // 1 based index
		char c;
		std::cin>>c;

		if(c == 'a'){
			a.push_back(i);
		}else{
			b.push_back(i);
		}
	}
	std::cout<<std::min(get(a), get(b))<<"\n";
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int t;
	std::cin>>t;

	while(t--){
		solve();
	}

	return 0;
}