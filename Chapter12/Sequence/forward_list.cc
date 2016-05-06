#include <iostream>
#include <forward_list>

using namespace std;


/**
    forward_list는 단일연결리스트로 구성된 컨테이너로서
    list 컨테이너와 비스하지만, push_back()멤버함수는 지원 ㄴㄴ 하다.

 */
int main(){

    forward_list<int> fi;
    forward_list<int> fi2 = {1,2,3,4};


    fi.push_front(10);
    fi.push_front(20);
    fi.push_front(30);
    fi.push_front(40);
    fi.push_front(50);

    for(auto i = fi.begin(); i != fi.end(); i++){
        cout << *i << " ";
    }
    cout << endl;


    for(auto i = fi2.begin(); i != fi2.end(); i++){
        cout << *i << " ";
    }
    cout << endl;

    for(auto i  = fi.begin(); i != fi.end(); i++){
        if(*i == 30){
            fi.splice_after(i, fi2);
        }
    }

    for(auto i = fi.begin(); i != fi.end(); i++){
        cout << *i << " ";
    }
    cout << endl;

    forward_list<int> fi3;

    for(int i=0;i<100;i+=10){
        fi3.push_front(i);
    }


    /**
        특이하게 forward_list는 before_begin()이라는 front위치 전에 잇는 부분이다.

            |0|1|2|3|4|5|
          bb|b|       |e|
     */
    auto p = fi.before_begin();

    fi.splice_after(p, fi3);

    for(auto i = fi.begin(); i != fi.end(); i++){
        cout << *i << " ";
    }
    cout << endl;


    return 0;
}
