#include<iostream>
#include<vector>
#include<algorithm>

void manual_reverse(std::vector<int>& vec){
    for(int i = 0, j = vec.size() - 1; i < j; i++, j--){
        std::swap(vec[i], vec[j]);
    }
}