#include<iostream>
#include<vector>
#include<string>

void solve(){
	std::string str;
	std::cin>>str;

	int len = str.size();
	int m = 0;
	std::vector<bool> prev(26, false);

	for(auto &c: str){
		if(prev[c - 'a']){
			m += 2;

			//clearing the previous marked
			for(int j = 0; j < 26; ++j) prev[j] = false;
		}else prev[c - 'a'] = true;
	}
	std::cout<< str.size() - m<<"\n";
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