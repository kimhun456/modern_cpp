#include <iostream>
#include <set>

using namespace std;

int main(){

    multiset<int> s;
    multiset<int>::iterator ms_iter;
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

    ms_iter = s.insert(12);

    cout <<"30의 개수 : " <<s.count(30) << endl;
    for(auto i = s.begin(); i!= s.end(); i++){
        cout << *i << " ";
    }
    cout << endl;

    auto f = s.find(55);
    if(f!=s.end())
        cout << *f << endl;

    return 0;
}
