#include<iostream>
#include<string>
#include<vector>

class Manacher{
public:
	std::string s, t;
	std::vector<int> p;

	Manacher(const std::string& str){
		s = str;
		build();
	}
	void build(){
		t = "@"; // left sentinel to prevent bounds
		for(char c : s){
			t += "#" + std::string(1, c);
		}
		t += "#$"; // right sentinel
		int n = t.size();
		p.assign(n, 0);

		int l = 1,r = 1;
		for(int i = 1; i < n - 1; ++i){
			int mirror = l + r - i;
			if(i < r) p[i] = std::min(r - i, p[mirror]);
			while(t[i + 1 + p[i]] == t[i - 1 - p[i]]) ++p[i];
			if(i + p[i] > r){
				l = i - p[i];
				r = i + p[i];
			}
		}
	}
	std::string longestPalindrome(){
		int max_len = 0, center = 0;
		for(int i = 1; i < p.size(); ++i){
			if(p[i] > max_len){
				max_len = p[i];
				center = i;
			}
		}
		int start = (center - max_len) / 2; // map to original index
		return s.substr(start, max_len);
	}
};

void solve(){
	std::string input;
	std::cin>>input;
	// Using Manachers Algorithm, linear
	Manacher m(input);
	std::cout<<m.longestPalindrome() <<"\n";
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	solve();

	return 0;
}