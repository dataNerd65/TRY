#include<iostream>
/*
overflow error*/

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	long long a, b, c, d;
	std::cin>>a>>b>>c>>d;

	long long result = (a * b * c * d);

	int firstNo = result % 10;
	// pop last no
	result /= 10;
	int secondNo = result % 10;

	int answer = (secondNo * 10) + firstNo;
	std::cout<<answer<<"\n";

	return 0;
}