#include<iostream>
#include<algorithm>
#include<string>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	std::string str1;
	std::string str2;

	std::cin>>str1;
	std::cin>>str2;

	bool islexicographic = true;
	bool islexicographic2 = true;

	for(int i= 1; i < str1.size(); ++i){
		if(str1[i] < str1[i - 1]) 
			islexicographic = false;
	}
	for(int i= 1; i < str2.size(); ++i){
		if(str2[i] < str2[i - 1]) 
			islexicographic2 = false;
	}

	if(islexicographic && islexicographic2 && str1.size() < str2.size()){
		std::cout<<str1<<"\n";
	}else if(islexicographic && islexicographic2 && str1.size() > str2.size()){
		std::cout<<str2<<"\n";
	}else if(islexicographic && !islexicographic2){
		std::cout<<str1<<"\n";
	}else if(!islexicographic && islexicographic2){
		std::cout<<str2<<"\n";
	}



	return 0;
}