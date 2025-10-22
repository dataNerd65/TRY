#include<iostream>
#include<cctype>
#include<algorithm>
#include<string>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string pets;
    std::string vowels = "aoyeui";
    std::cin>> pets;
    // to lowercase
    std::transform(pets.begin(), pets.end(),pets.begin(), ::tolower);
    std::string res = "";
    for(char& c: pets){
        if(vowels.find(c) == std::string::npos){
            res.push_back('.');
            res.push_back(c);
        }
    }
    std::cout<<res<<"\n";
    return 0;
}