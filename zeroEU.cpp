#include<iostream>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    // soln here
    long long sum;



    return 0;
}
long long sum = 0;
for(long long i = 1; i <= 274500; i += 2) {
    sum += i*i;
}
