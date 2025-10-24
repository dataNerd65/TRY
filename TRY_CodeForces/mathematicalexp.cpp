#include<iostream>
void processInput(int& a, int& b, int& c, char& s, char& q){
	if(s == '+' && a + b == c){
		std::cout<<"Yes"<<"\n";
		return;
	}else if(s == '+' && a + b != c){
		std::cout<<a + b<<"\n";
		return;
	}else if(s == '-' && a - b == c){
		std::cout<<"Yes"<<"\n";
		return;
	}else if(s == '-' && a - b != c){
		std::cout<<a - b<<"\n";
		return;
	}else if(s == '*' && a * b == c){
		std::cout<<"Yes"<<"\n";
		return;
	}else if(s == '*' && a * b != c){
		std::cout<<a * b<<"\n";
		return;
	}
	return;
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int a, b, c;
	char s, q;
	std::cin>>a>>s>>b>>q>>c;

	processInput(a, b, c, s, q);

	return 0;
}