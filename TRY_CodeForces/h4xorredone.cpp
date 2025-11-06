#include<iostream>
#include<string>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	std::string word;
	std::cin>>word;

	std::string res;

	for(char& c: word){
		switch (c){
			case 'a': res.push_back('4'); break;
			case 'i': res.push_back('1'); break;
			case 'e': res.push_back('3'); break;
			case 'o': res.push_back('0'); break;
			case 's': res.push_back('5'); break;
			default : res.push_back(c); 
		}
	}
	std::cout<<res<<"\n";

	return 0;
}