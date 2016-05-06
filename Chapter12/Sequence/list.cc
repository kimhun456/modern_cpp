#include <iostream>
#include <list>

using namespace std;



/**
    리스트는 이중연결 리스트로 연결된 순차 컨테이너이다.
    리스트는 메모리상에 연속적으로 위치하지 않고 있다.
    중간에 데이터를 삽입 및 삭제하는데 오버헤드가 적다. O(n)
 */
int main(){

    list<int> list1;
    list<int> list2;


    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_front(10);
    list1.push_front(20);
    list1.push_front(30);

    for(auto i=list1.begin();i!=list1.end(); i++){
        cout << *i << " ";
    }
    cout << endl;

    /**
        list는 list[99]와 같은 문법이 존재하지 않는다.
        즉 바로 접근이 불가능하고 1번쨰부터 차례대로 읽어나가야 된다는 것이다.
        대신 삽입 삭제시 o(1)의 상수 시간을 보장한다.

     */
    for(auto p =list1.begin(); p != list1.end(); p++){
        if(*p == 10){
            list1.insert(p, 0);
            break;
        }
    }

    for(auto i=list1.begin();i!=list1.end(); i++){
        cout << *i << " ";
    }
    cout << endl;



    for(int i=1; i <= 10;i++){
        list2.push_back(i);
    }


    for(auto i=list2.begin();i!=list2.end(); i++){
        cout << *i << " ";
    }
    cout << endl;


    /**
     splice는 그 부분에 list2의 원소를 넣을수 있다.
     */
    for(auto p =list1.begin(); p != list1.end(); p++){
        if(*p == 20){
            list1.splice(p, list2);
            break;
        }
    }


    for(auto i=list1.begin();i!=list1.end(); i++){
        cout << *i << " ";
    }
    cout << endl;




    return 0;
}
