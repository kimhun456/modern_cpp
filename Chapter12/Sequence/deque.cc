#include <iostream>
#include <deque>

using namespace std;
/**
    deque는 앞이랑 뒤에서 모두 빼고 넣을 수 있는 자료구조이다.
    

*/
int main(){

    deque<int> dq;


    dq.push_front(1);
    dq.push_front(2);

    for(auto i=0;i<dq.size();i++){
        cout << dq.at(i) << endl;
    }

    dq.push_back(3);
    dq.push_back(4);

    dq.pop_front();
    dq.pop_front();

    for(auto i=0;i<dq.size();i++){
        cout << dq.at(i) << endl;
    }



    return 0;
}
