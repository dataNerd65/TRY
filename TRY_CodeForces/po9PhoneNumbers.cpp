#include<iostream>
#include<string>
#include<cmath>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string str;
    int n ;
    std::cin>>n;

    std::cin>> str;
    // edge cases
    if(n < 11){
        std::cout<<0<<'\n';
        return 0;
    }
    if(str.find('8') == std::string::npos){
        std::cout<<0<<'\n';
        return 0;
    }
    int count_8 = 0;
    for(char& c: str){
        if(c == '8'){
            count_8 += 1;
        }
    }
    int des = n / 11;
    int result = std::min(count_8, des);
    std::cout<<result<<"\n";
    return 0;
}