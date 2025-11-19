#include<iostream>
#include<string>

void solve(){
	std::string str;
	std::cin>>str;

	if(str.find("010") != std::string::npos || str.find("101") != std::string::npos){
		std::cout<<"Good"<<"\n";
		return;
	}else{
		std::cout<<"Bad"<<"\n";
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