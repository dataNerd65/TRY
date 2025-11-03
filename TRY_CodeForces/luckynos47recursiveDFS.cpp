#include<iostream>
#include<vector>
#include<algorithm>

void generate(long long current, long long limit, std::vector<long long>& lucky){
	if(current > limit) return;
	if(current != 0) lucky.push_back(current);
	generate(current * 10 + 4, limit, lucky);
	generate(current * 10 + 7, limit, lucky);

}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here

	int a, b;
	std::cin>>a>>b;

	std::vector<long long> lucky;

	generate(0, b, lucky);

	bool found = false;
	std::sort(lucky.begin(), lucky.end());
	for(long long ele : lucky){
		if(ele >= a and ele <= b){
			std::cout<<ele<<" ";
			found = true;
		}
	}
	if(!found){
		std::cout<<-1<<"\n";
	}

	return 0;
}