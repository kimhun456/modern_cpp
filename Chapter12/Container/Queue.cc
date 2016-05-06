#include <iostream>
#include <queue>

using namespace std;
/**
    컨테이너 어댑터는 순차컨테이너를 이용해서 구현되어 있다.
    순차 컨테이너의 기능만을 이용해서 만들수 있어서 컨테이너 어댑터라고 부른다.
 */
int main(){

    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    while (!q.empty()) {
        cout << q.front() << " " ;
        q.pop();
    }
    cout << endl;


    return 0;
}
