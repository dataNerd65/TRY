#include<iostream>
#include<string>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int n;
	std::cin>>n;

	while(n--){
		std::string word;
		std::cin>>word;

		if(word.size() <= 10){
			std::cout<<word<<"\n";
		}else{
			char first = word[0];
			int mid = word.size() - 2;
			char last = word[word.size() - 1];

			std::cout<<first<<mid<<last<<"\n";
		}
	}

	return 0;
}