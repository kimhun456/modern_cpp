#include <iostream>
#include <unordered_map>

using namespace std;
/**
  a.k.a. Hash맵이라고 생각하면 된다.

*/
int main(){

    unordered_map<string, int> um;

    um.insert({"A",123});
    um.insert(make_pair("B", 32));
    um.insert({
        {"C",1000},
        {"D",123}
    });

    cout << "find B"<< endl;




    auto bc = um.bucket("B");

    for(auto i = um.begin(bc) ; i!= um.end(bc); ++i){
        cout << i->first << i->second << endl;
    }



    return 0;
}
