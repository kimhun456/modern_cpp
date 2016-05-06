#include <iostream>
#include <vector>
using namespace std;


/*
 STL = Standard Template Library
 표준 템플릿 라이브러리
 재사용성 및 성능에 최적화가 잘 되어 설계 되어 있다.

*/

int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(2);

    cout << v[0] << endl;
    cout << v.at(0) << endl;
    cout << v[1] << endl;
    cout << v.at(1) << endl;

    // 얘는 그냥 0을 출력하는데 이건 3번째 밸류의 값에 접근하기 때문에 오류가 난다.
    cout << v[2] << endl;

    // 사이즈가 2인데 3번째 value에 접근하려 하기 때문에 오류가난다.
//    cout << v.at(2) << endl;


    // 미리 10개의 객체를 생성하며 0으로 초기화시켜 놓는다.
    vector<int> v2(10);

    // 1으로 초기화
     vector<int> v3(10,1);

    for(auto i=0;i<v3.size();i++)
        cout << v3.at(i) << endl;


    v2.push_back(12);
    v2.push_back(13);

    // int형으로
    for(int i=0;i<v2.size();i++){
        cout << i << " : "<< v2.at(i) << endl;
    }


    //원래는 vector<int>::size_type이 리턴형이다.
    for(vector<int>::size_type i=0;i<v2.size();i++){
        cout << i << " : "<< v2.at(i) << endl;
    }

    // auto로 하면 컴파일러가 자동으로 데이터형을 정해준다.
    for(auto i = 0;i<v2.size();i++){
        cout << v2.at(i) << endl;
    }


}
