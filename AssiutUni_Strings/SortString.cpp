#include<iostream>
#include<string>

void solve(){
	std::string str;
	std::cin>>str;

	int right = str.size() - 1;
	int left = 0;

	while(left < right){
		if(str[left] != str[right]){
		  std::cout<<"NO"<<"\n";
			return;
		}
		left++;
		right--;
			
	}
	std::cout<<"YES"<<"\n";
	return;
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
//   std::string str;
// 	std::cin>>str;

// 	int right = str.size() - 1;
// 	int left = 0;

// 	while(left < right){
// 		if(str[left] != str[right]){
// 		  std::cout<<"NO"<<"\n";
// 			break;
// 		}
// 		left++;
// 		right--;
			
// 	}
// 	std::cout<<"YES"<<"\n";
  solve();
	return 0;
}