#include <iostream>
#include <map>

using namespace std;


/**
    map은 key와 value를 가지고 있는 자료구조이다.
    key-value를 선택할 수 있다.
    즉,  맵은 pair객체를 가지고 있다??
 **/
int main(){

    map<string,int> m;


    // insert함수를 써서 pair객체를 만들어 입력할 수 있다.
    m.insert(make_pair("A", 10));
    m.insert(make_pair("B", 20));
    m.insert(make_pair("C", 30));
    m.insert(make_pair("D", 40));
    m.insert(make_pair("E", 50));
    m.insert(make_pair("F", 60));

    //이런식으로 m[key] = value;
    //입력할 수 있다.
    m["F"] = 70;

    for(auto i = m.begin(); i!= m.end();i++){
        cout << "[" << i->first << " " << i->second << "]" <<endl;
    }


    // m.find(키값)으로 찾을수 있다.
    // pair객체를 반환한다.
    auto i = m.find("F");
    cout << i->second << endl;



    return 0;
}
