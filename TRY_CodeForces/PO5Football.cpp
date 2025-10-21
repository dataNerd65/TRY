#include<iostream>
#include<string>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    std::string gamers;
    std::cin>> gamers;

    int count = 1;
    char prev;
    for(int i = 0; i < gamers.size() - 1; ++i){
        prev = gamers[i];
        if(gamers[i + 1] == prev){ // do i risk an out of bounds error
            count += 1;
            if(count >= 7){
                std::cout<<"YES"<<"\n";
                return 0;
            }
        }else{
            count = 1;
        }
    }
    std::cout<<"NO"<<"\n";
    return 0;
}