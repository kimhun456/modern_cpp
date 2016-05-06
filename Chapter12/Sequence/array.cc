#include <iostream>
#include <array>

using namespace std;
/**
  어레이는 유일하게 동적할당을 지원하지 않는다.

*/
int main(){


    array<int, 10> arr;

    arr = {1,2,3};

    for(auto i = 0; i<arr.size();i++){
        cout << arr.at(i) << " ";
    }
    cout << endl;


    // 모든 원소를 1로 채우게 된다.
    arr.fill(1);


    for(auto i = 0; i<arr.size();i++){
        cout << arr.at(i) << " ";
    }
    cout << endl;


    return 0;
}
