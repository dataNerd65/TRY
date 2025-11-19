#include<iostream>
#include<string>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	std::string str;
	std::cin>>str;

	long long sum = 0;

	for(int i = 0; i < str.size(); ++i){
		sum += str[i] - '0';
	}
	std::cout<<sum<<"\n";

	return 0;
}