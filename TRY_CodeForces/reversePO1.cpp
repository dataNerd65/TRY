#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    int n;
    std::vector<int> vec;
    std::cin>>n;
    while(n--){
        int x ;
        std::cin>> x;
        vec.push_back(x);
    }
    // reverse 
    std::reverse(vec.begin(), vec.end());
    for(int num : vec){
        std::cout<< num <<" ";
    }
    std::cout<<'\n';
    return 0;
}