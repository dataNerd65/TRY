#include<iostream>
#include<string>
#include<algorithm>

void solve(){
	std::string str;
	std::cin>>str;

	if(str.find("FFT") == std::string::npos && str.find("NTT") == std::string::npos){
		std::cout<<str<<"\n";
		return;
	}else{
		// this block executes
		std::sort(str.begin(), str.end(), std::greater<char>());
		std::cout<<str<<"\n";
		return;
	}
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