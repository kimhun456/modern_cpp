#include <iostream>

using namespace std;
/**
    에러 : 프로그램의 실행 도중 발생하는 오류 상황
    예외처리는 if문으로 하는게 아니다. 왜냐면 if문은 프로그램의 흐름으로 굉장히 많이 활용되기 때문에 다른 예외처리 방법이 필요하게 된다.

 */
int main(){

    char name[20];

    try {
        cout << "이름을 입력해 주세요 : ";
        cin >> name;

        if(strlen(name) <= 2){
            throw name;
        }
    } catch (char * e) {
        cout << " 예외발생 : " << name << endl;
    }
    return 0;
}
