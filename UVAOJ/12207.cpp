#include<iostream>
#include<deque>
#include<algorithm>

void solve(){
    int P, C;
    int case_num = 1;

    // loop to read multiple testcase until p and c are both 0
    while(std::cin>>P>>C &&(P != 0 || C != 0)){
        std::cout<<"Case "<<case_num++<<":\n";

        std::deque<int> q;
        // optimizing 
        for(int i = 1; i <= std::min(P,C); ++i){
            //insert
            q.push_back(i);
        }
        // process all C commands for this case
        for(int j = 0; j < C; ++j){
            char command;
            std::cin>>command;

            if(command == 'E'){
                int exp;
                std::cin>>exp;
                //find and remove the element from its current position
                for(std::deque<int>::iterator it = q.begin(); it != q.end(); ++it){
                    if(*it == exp){
                        q.erase(it);
                        break; // break loop once found, they are unique
                    }
                }
                q.push_front(exp);
            }else{
                int front_val = q.front();
                q.pop_front();
                std::cout<<front_val<<"\n";
                q.push_back(front_val);
            }
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    // soln here 
    solve();
    
    return 0;
}