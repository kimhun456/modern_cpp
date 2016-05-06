#include <iostream>
#include <set>
/**
    set은 map과 다르게 key-value가 아닌
    key만 있는 것이다.
    중복을 허용하지 않는다.
*/
using namespace std;

int main(){

    set<int> s;
    pair<set<int>::iterator,bool> pr;

    s.insert(10);
    s.insert(30);
    s.insert(60);
    s.insert(20);
    s.insert(50);
    s.insert(10);
    s.insert(30);
    s.insert(60);
    s.insert(20);
    s.insert(50);

    pr = s.insert(40);

    for(auto i = s.begin(); i!= s.end(); i++){
        cout << *i << " ";
    }
    cout << endl;

    s.insert(pr.first,55);

    for(auto i = s.begin(); i!= s.end(); i++){
        cout << *i << " ";
    }
    cout << endl;

    auto f = s.find(55);
    if(f!=s.end())
        cout << *f << endl;

    return 0;
}
