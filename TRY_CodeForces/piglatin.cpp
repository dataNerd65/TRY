#include<iostream>
#include<string>
#include<cctype>
std::string capitalise(std::string stri){
	if(!stri.empty()){
		stri[0] = std::toupper(stri[0]);
	}
	return stri;
}
std::string piglatin(const std::string& stringi){
	if(stringi.size() == 0) return stringi;
	char c = std::tolower(stringi[0]);
	return stringi.substr(1) + c + "ay";
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int t;
	std::cin>>t;
	while(t--){
		std::string word;
		std::getline(std::cin, word);
		std::cout<<capitalise(piglatin(word))<<"\n";
	}

	return 0;
}