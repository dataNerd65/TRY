#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
#include<algorithm>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	std::string str;
	std::cin>>str;

	std::unordered_map<char, int> freq;

	for(int i = 0; i < str.size(); ++i){
		if(freq.find(str[i]) != freq.end()){
			freq[str[i]]++;
		}else{
			freq[str[i]] = 1;
		}
	}
	std::vector<int> keys;
	for(auto& pair : freq){
		keys.push_back(pair.first);
	}
	std::sort(keys.begin(), keys.end());

	for(int key : keys){
		std::cout<<freq[key]<<" : "<<key<<"\n";
	}

	return 0;
}