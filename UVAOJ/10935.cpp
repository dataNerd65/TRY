#include<iostream>
#include<deque>

void solve(){
	std::deque<int> dq;
	std::deque<int> rems;
	int n;
	while(std::cin>>n && n != 0){
		// per n process
		for(int i = 1; i <= n; ++i){
			dq.push_back(i);
		}
		while(dq.size() > 1){
			rems.push_back(dq.front());
			dq.pop_front();
			int x = dq.front();
			dq.push_back(x);
			dq.pop_front();
		}
		//Discarded cards
		std::cout<<"Discarded cards:";
		if(!rems.empty()){
		  std::cout<<" ";
		}
		for(int i = 0 ; i < rems.size(); ++i){
			std::cout<<rems[i];
			if(i < rems.size() - 1){
			  std::cout<<", ";
			}
		}
		std::cout<<"\n";
		std::cout<<"Remaining card: "<<dq.front()<<"\n";// 
		
		dq.clear();
		rems.clear();
	}
	
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
  solve();
	return 0;
}