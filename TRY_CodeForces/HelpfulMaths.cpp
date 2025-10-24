#include<iostream>
#include<string>
#include<vector>
#include<cctype>
#include<algorithm>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here

	std::string summation;
	std::cin>>summation;

	std::vector<char> vec; // vector of characters
	for(int i = 0; i < summation.size(); ++i){
		if(isdigit(summation[i])){
			vec.push_back(summation[i]);
		}
	}
	//nlog n
	std::sort(vec.begin(), vec.end());
	// another 0(n) operation
	std::string result;

	for(char c : vec){
		result.push_back(c);
		result.push_back('+');
	}
	if(!result.empty()) result.pop_back();
	std::cout<<result<<"\n";

	return 0;
}