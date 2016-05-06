#include <iostream>
#include <deque>

using namespace std;
/**
    deque는 메모리 관리 정책에 의하여 연속적인 메모리를 할당 받지 않는다고 해도
    사용자 입장에서는 연속적이라고 판단해도 된다.
    블록단위로 연속적인 메모리에 위치한다고 생각하면 될 듯 하다.

*/
int main(){

    deque<int> dq;


    dq.push_front(1);
    dq.push_front(2);
    dq.push_back(3);
    cout << "dq.size() : " << dq.size() << endl;
    cout << "dq" << endl;
    for(auto i=0;i<dq.size();i++){
        cout << dq.at(i) << endl;
    }


    cout << "dq.size() : " << dq.size() << endl;

    for(auto i=0;i<dq.size();i++){
        cout << "dq.at(" << i << ")'s address " << &dq[i] << endl;
    }

    deque<int> dq2;

    for(int i=0;i<5;i++){
        dq2.push_back(i);
    }

    cout << "dq2.size() : " << dq2.size() << endl;

    for(auto i=0;i<dq2.size();i++){
        cout << "dq2.at(" << i << ")'s address " << &dq2[i] << endl;
    }


    for(int i=0;i<2000;i++){
        dq.push_back(i);
    }


    cout << "dq.size() : " << dq.size() << endl;

    for(auto i=0;i<dq.size();i++){
        cout << "dq.at(" << i << ")'s address " << &dq[i] << endl;
    }

    return 0;
}
