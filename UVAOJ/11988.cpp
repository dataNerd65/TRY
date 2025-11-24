#include<iostream>
#include<list>
#include<string>

using std::cout;
using std::list;

void solve(){
  std::string str;
  while(std::getline(std::cin, str)){
    list<char> text; // per case
    auto it = text.begin(); // start ops
    
    for(char& c: str){
      if(c == '['){
        it = text.begin();
      }else if(c == ']'){
        it = text.end();
      }else{
        text.insert(it, c);
      }
    }
    for(auto& i: text) cout<<i;
    std::cout<<"\n";
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