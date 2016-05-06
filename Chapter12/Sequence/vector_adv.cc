#include <iostream>
#include <vector>
using namespace std;


/*
    Vector는 메모리가 늘어날때 벡터원소의 복사라는 오버헤드가 발생하게 된다.
    사실은 포인터 값의 복사가 일어난다.
    이러한 것을 이동 시맨틱이라고 하며, 얕은 복사를 통해 이루어진다.

    Sequence Data Structure
*/





int main(){


    /// 6개의 1로 초기화된 벡터
    vector<int> v(6,1);

    //메모리를 몇개를 찾아가는뎅
    cout << v.capacity() << endl;

    for(auto i = 0 ; i < v.size(); i++)
        cout << v.at(i) << " " ;
    cout << endl;

    // 4개의 3으로 초기화된 벡터
    v.assign(4, 3);
    // 캐퍼시티 즉, 메모리의 크기는 그대로 6이다.
    cout << v.capacity() << endl;
    for(auto i = 0 ; i < v.size(); i++)
        cout << v.at(i) << " " ;
    cout << endl;

    v.at(2) = 2;
    // v[2] = 2;

    for(auto i = 0 ; i < v.size(); i++)
        cout << v.at(i) << " " ;
    cout << endl;

    v.assign(10,1);


    // 메모리의 크기가 10으로 늘어난다.
    cout << v.capacity() << endl;
    for(vector<int>::iterator it = v.begin(); it!=v.end(); it++){
        *it = 9;
        cout << *it << " ";
    }
    cout << endl;
    cout << v.capacity() << endl;

}
