#include<iostream>
#include<string>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string gamers;
    std::cin>> gamers;

    char prev = gamers[0];
    int count = 0;

    for(char& c: gamers){
        if(c == prev){
            count += 1;
            if(count >= 7){
                std::cout<<"YES\n";
                return 0;
            }
        }
        else{
            count = 1;
            prev = c;
        }
    }
    std::cout<<"NO\n";
    return 0;
}