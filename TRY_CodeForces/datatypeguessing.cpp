#include<iostream>

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int a, k, n;
	std::cin>>a>>k>>n;

	auto result = (static_cast<double> (n) / a) * k;

	if(result - static_cast<int>(result) != 0){
		std::cout<<"double"<<"\n";
	}else if(result <= 2147483647){
		std::cout<<"int"<<"\n";
	}else{
		std::cout<<"long long"<<"\n";
	}

	return 0;
}
// NOT SOLVED