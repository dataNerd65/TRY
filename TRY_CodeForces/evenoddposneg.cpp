#include<iostream>

void countState(int& even, int& odd, int& pos, int& neg, int input){
	if(input % 2 == 0 && input < 0){
		even += 1; neg += 1;
	}else if(input % 2 == 0 && input > 0){
		even += 1; pos += 1;
	}else if(input % 2 != 0 && input < 0){
		odd++; neg+= 1;
	}else if(input % 2 != 0 && input > 0){
		odd++; pos++;
	}else if(input == 0){
		even += 1;
	}
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int n;
	std::cin>>n; 

	int evenCount = 0, oddCount = 0, posCount = 0, negCount = 0;
	while(n--){
		int input;
		std::cin>>input;
		countState(evenCount, oddCount, posCount, negCount, input);
	}

	std::cout<<"Even: "<<evenCount<<"\n";
	std::cout<<"Odd: "<<oddCount<<"\n";
	std::cout<<"Positive: "<<posCount<<"\n";
	std::cout<<"Negative: "<<negCount<<"\n";


	return 0;
}