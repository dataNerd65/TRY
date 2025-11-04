#include<iostream>
#include<string>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	std::string str;
	std::cin>>str;

	int count = 0;

	for(int i = 0; i < str.size(); ++i){
		if(str[i] == '4' || str[i] == '7'){
			count++;
		}
	}
	if(count == 4 || count == 7){
		std::cout<<"YES"<<"\n";
	}else{
		std::cout<<"NO"<<"\n";
	}

	return 0;
}