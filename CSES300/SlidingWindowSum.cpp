#include<iostream>
#include<vector>

void solve(){
	int n, k;
	std::cin>>n>>k;

	long long x, a, b, c;
	std::cin>>x>>a>>b>>c;

	// generator module
	std::vector<long long> vec;
	vec.reserve(n);
	vec.push_back(x);
	long long x_at = vec.back();
	for(int i = 2; i <= n; ++i){
		long long res = (a * x_at + b) % c;
		//std::cout<<res<<"\n";
		vec.push_back(res);
		x_at = vec.back();
	}
	//sliding now
	long long sum = 0;
	long long xored = 0;
	int l = 0;

	for(int r = 0; r < n; ++r){
		sum += vec[r];

		while(r - l + 1 >= k){
			xored ^= sum;
			sum -= vec[l];
			l++;
		}
	}
	std::cout<<xored<<"\n";

}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	solve();

	return 0;
}