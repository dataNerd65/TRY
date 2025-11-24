#include<iostream>
#include<vector>
#include<deque>

using ll = long long;

void solve(){
	int n, k;
	std::cin>>n>>k;

	ll x, a, b, c;
	std::cin>>x>>a>>b>>c;

	std::vector<ll> vec;
	vec.reserve(n);

	vec.push_back(x);
	ll x_at = vec.back();
	for(int i = 2; i <= n; ++i){
		ll res = (a * x_at + b) % c;
		vec.push_back(res);
		x_at = vec.back();
	}

	ll xored = 0;
	std::deque<int> dq;

	for(int i = 0; i < n; ++i){
		// remove elements outside window
		while(!dq.empty() && dq.front() <= i - k)
			dq.pop_front();
		//Remove bigger elements from the back
		while(!dq.empty() && vec[dq.back()] >= vec[i])
			dq.pop_back();

		// Add new index
		dq.push_back(i);

		// when we have a ful window get the minimum
		if(i >= k - 1){
			ll mn = vec[dq.front()]; // front is smallest
			xored ^= mn;
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