#include<iostream>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int a, b;
	std::cin>>a>>b;

	/*
	@ first correct solution 
	*/
	// if(a >= b){
	// 	std::cout<<"Yes"<<"\n";
	// }else{
	// 	std::cout<<"No"<<"\n";
	// }
	std::cout<<((a >= b) ? "Yes":"No")<<"\n"; // precedence of << greater than ? so error

	return 0;
}