#include<iostream>
#include<vector>

int main(){

    int n;
    std::cin>>n;
    // std::vector<int> vec;
    // while(n--){
    //     int c;
    //     std::cin>> c;
    //     vec.push_back(c);
        
    // }
    // prealocation a  bit faster
    std::vector<int> vec(n); // creates a vector with length n but filled with 0s, so preallocate
    // pre increment is faster in cases of iterators in vectors
    for(int i =0; i < vec.size(); ++i){
        std::cin>> vec[i];
    }
    int x, z;
    std::cin>>x>>z;
    int sum = 0;
    for(int i = x; i < z + 1; i++ ){
        sum += vec[i];
    }
    std::cout<<sum<<'\n';
    return 0;
}