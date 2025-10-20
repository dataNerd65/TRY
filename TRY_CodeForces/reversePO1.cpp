#include<iostream>
#include<vector>
#include<algorithm>

void manual_reverse(std::vector<int>& vec){
    for(int j = vec.size() - 1, i = 0; i < j; i++, j--){
        std::swap(vec[i], vec[j]);
    }
}

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

    // manual reverse
    //manual_reverse(vec);

    for(int num : vec){
        std::cout<< num <<" ";
    }
    std::cout<<'\n';
    return 0;
}