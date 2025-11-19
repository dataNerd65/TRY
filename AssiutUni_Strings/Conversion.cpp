#include<iostream>
#include<string>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	std::string str;
	std::cin>>str;

	for(char& c : str){
		if(c >= 'a' && c <= 'z'){
			std::cout<< static_cast<char> (c - 32);
		}else if(c >= 'A' && c <= 'Z'){
			std::cout<< static_cast<char> (c + 32);
		}else{
			std::cout<<" ";
		}
	}
	std::cout<<"\n";

	return 0;
}