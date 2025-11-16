#include<iostream>
#include<string>

void solve(){
	std::string str1, str2;
	std::cin>>str1>>str2;

	std::string mini = (str1.size() <= str2.size()) ? str1 : str2; // compare size not lexicgraphically
	std::string maxi = (str1.size() > str2.size()) ? str1 : str2;

	std::string res = "";
	for(int i = 0; i < mini.size(); ++i){
		res += str1[i];
		res += str2[i];
	}
	res += maxi.substr(mini.size());

	std::cout<<res<<"\n";
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int n;
	std::cin>>n;

	while(n--){
		solve();
	}
	return 0;
}