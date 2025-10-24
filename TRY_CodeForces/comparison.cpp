#include<iostream>

void processInput(int& a, int& b, char& s){
	if(s == '<' && a < b ){
		std::cout<<"Right"<<"\n";
		return;
	}else if(s == '<' && !(a < b)){
		std::cout<<"Wrong"<<"\n";
		return;
	}else if(s == '>' && (a > b)){
		std::cout<<"Right"<<"\n";
		return;
	}else if(s == '>' && !(a > b)){
		std::cout<<"Wrong"<<"\n";
		return;
	}else if(s == '=' && (a == b)){
		std::cout<<"Right"<<"\n";
		return;
	}else if(s == '=' && !(a == b)){
		std::cout<<"Wrong"<<"\n";
		return;
	}
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int a, b;
	char s;
	std::cin>>a>>s>>b;

	processInput(a, b, s);

	return 0;
}