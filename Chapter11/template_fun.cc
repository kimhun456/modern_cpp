#include <iostream>

using namespace std;


/*  템플릿 파라미터로 T로 선언하고
    함수에 있는 int 부분을 T로 바꿧줌
 */
template <typename T>
T const add(T const &a, T const &b){
    return a+b;
}

/**

    템플릿 파라미터는 여러개도 쓸 수 있다.

 */
template <typename T, typename U>
T add_t(T const &a, U const &b) {
    return a+b;
}

/**
    리턴형을 템플릿 인자로 쓸수도 있다.
 */
template <typename R,typename T,typename U>
R add_tri(T const &a, U const &b){
    return a+b;
}
int main(){
    // 더블
    cout << add(1.1,33.1) << endl;
    // 인트
    cout << add(1,2) << endl;

    // 인트 더블
    cout << add_t(1,1.1) << endl;

    // 더블이 리턴형인 add_tri 함수
    cout << add_tri<double>(1,12.1) << endl;

    // int가 리턴형인 add_tri 함수
    cout << add_tri<int>(1,12.1) << endl;

    return 0;
}
