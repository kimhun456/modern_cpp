#include <iostream>
#include <map>

using namespace std;


/**
    multimap은 key와 value를 가지고 있는 자료구조이다.
    key-value를 선택할 수 있다.
    중복이 허용된다.
**/
int main(){
    multimap<string, int> mm;

    mm.insert(make_pair("A", 10));
    mm.insert(make_pair("B", 20));
    mm.insert(make_pair("C", 30));
    mm.insert(make_pair("D", 40));
    mm.insert(make_pair("E", 50));
    mm.insert(make_pair("E", 70));
    mm.insert(make_pair("E", 60));

    for(auto i= mm.begin(); i!= mm.end(); i++){
        cout << "["<<  i->first  <<" " << i->second <<"]"<< endl;
    }

    //ierator를 반환한다.
    // 로우부터 업바운드까지의 합을 말한다.
    auto low_bound = mm.lower_bound("E");
    auto up_bound = mm.upper_bound("E");

    cout << "Key C 의 value 들 :" ;

    for(auto i = low_bound; i!= up_bound; i++){
        cout << "["<<  i->first  <<" " << i->second <<"]"<< " " ;
    }
    cout << endl;


    /*
        equal_range("key")함수를 이용하여
        return pair(iterator, iterator);
    */
    auto eq_ra = mm.equal_range("E");
    cout << "또다른 방법 key E의 value는" ;

    // first는 lower_bound이고 second는 upper_bound이다.
    for(auto i = eq_ra.first ; i!= eq_ra.second; ++i){
        cout << i->second << " ";
    }
    cout << endl;

    return 0;
}
