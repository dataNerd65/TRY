#include<iostream>
#include<string>
#include<cctype>
std::string piglatin(std::string word){
	char c = word[0];
	return word.substr(1) + c + "ay";
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	// soln here
	int t;
	std::cin>>t;
	std::cin.ignore();

	while(t--){
		std::string sentence;
		std::getline(std::cin, sentence);

		int n = sentence.size();
		int  i = 0;
		std::string result;
		//traversing the string, first tolower the first char
		if(!sentence.empty()){
			sentence[0] = std::tolower(sentence[0]);
		}

		while(i < n){
			while(i < n && sentence[i] == ' '){
				result += sentence[i++];
			}
			if(i >= n) break;
			
			int start = i;
 
 		while(i < n && sentence[i] != ' '){
 			i++;
 		}
 		int endword = i - 1;

 		std::string word = sentence.substr(start, endword - start + 1);

 		result += piglatin(word);
		}	
		if(!result.empty()){
			result[0] = std::toupper(result[0]);
		}
		std::cout<<result<<"\n";
	}

	return 0;
}
// todo and master