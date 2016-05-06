#include <iostream>

using namespace std;
/**
    에러 : 프로그램의 실행 도중 발생하는 오류 상황
    예외처리는 if문으로 하는게 아니다. 왜냐면 if문은 프로그램의 흐름으로 굉장히 많이 활용되기 때문에 다른 예외처리 방법이 필요하게 된다.

 */
int main(){

    int a,b;


    int result;

    cout << "a/b를 수행합니다." << endl;

    cout << "a : ";

    cin >> a;



    cout << "b : ";

    // 만약 0을 입력하면 비정상적인 종료가 되게 된다.
    cin >> b;

    result = a/b;


    cout << "result : " << result << endl;


    return 0;
}
