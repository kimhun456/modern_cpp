#include <iostream>
#include <queue>

using namespace std;

/**
    priority queue == 큐에 우선순위가 추가된 느낌
    즉 , heap구조이다.
 */
int main(){


    priority_queue<int> pq;
    // int형 ,vector로 구현, greater()를 사용해 오름차순으로 바꿈??
    priority_queue<int,vector<int>,greater<int>> pq2;
    priority_queue<int,deque<int>,greater<int>> pq3;

    pq.push(10);
    pq.push(40);
    pq.push(30);
    pq.push(20);
    pq.push(10);
    pq.push(20);
    pq.push(10);
    pq.push(10);
    pq.push(10);
    pq.push(20);
    pq.push(10);
    pq.push(50);
    pq.push(70);

    while(!pq.empty()){
        cout << pq.top() << " " ;
        pq2.push(pq.top());
        pq3.push(pq.top());
        pq.pop();
    }
    cout << endl;


    while(!pq2.empty()){
        cout << pq2.top() << " " ;
        pq2.pop();
    }
    cout << endl;



    while(!pq3.empty()){
        cout << pq3.top() << " " ;
        pq3.pop();
    }
    cout << endl;





}
