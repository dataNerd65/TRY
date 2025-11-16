#include<iostream>
#include<string>

void solve(){
	int n_a ;
	std::cin>>n_a;

	std::string str_a;
	std::cin>>str_a;

	int m_b_c;
	std::cin>>m_b_c;

	std::string str_b;
	std::cin>>str_b;

	std::string str_c;
	std::cin>>str_c;

	//operation
	std::string res = "";
	for(int i = (m_b_c - 1); i >= 0; --i){
		if(str_c[i] == 'V'){
			res += str_b[i];
		}
	}
	res += str_a;

	for(int i = 0; i < m_b_c; ++i){
		if(str_c[i] == 'D'){
			res += str_b[i];
		}
	}
	std::cout<<res<<"\n";
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