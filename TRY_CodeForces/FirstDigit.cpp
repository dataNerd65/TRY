#include<iostream>

/*
@ best way to get last number
*/
int firstNo(int num){
	while(num >= 10){
		num /= 10; // pop last number
	}
	return num;
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int x;
	std::cin>>x;

	int fnumber = firstNo(x);

	std::cout<<((fnumber % 2 == 0) ? "EVEN" : "ODD")<<"\n";

	return 0;
}