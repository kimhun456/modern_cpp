#include <iostream>

using namespace std;
/**
    에러 : 프로그램의 실행 도중 발생하는 오류 상황
    예외처리는 if문으로 하는게 아니다. 왜냐면 if문은 프로그램의 흐름으로 굉장히 많이 활용되기 때문에 다른 예외처리 방법이 필요하게 된다.


 */
 
// 예외를 명시하여 어떤 데이터형이 예외로 전달 되는지 미리 조사해 작성 할 수도 있다.
void inputName(char *name) throw (char*){

    cout << "이름을 입력해 주세요 : ";
    cin >> name;

    if(strlen(name) <= 2){
        throw name;
    }
}

int inputAge() throw (int){
    int age;
    cin >> age;

    if(age<1){
        throw age;
    }
    return age;
}


int main(){

    char name[20];
    int age;
    try {

        inputName(name);
        age = inputAge();

        cout << " Myname is " << name << endl;
        cout << " My age is " << age << endl;


    }
    // catch는 여러 타입을 받을 수도 있다.
    catch (char * e) {
        cout << " 예외발생 : " << name << endl;
    }catch(int e){
        cout << " exception" << age << endl;
    }
    return 0;
}
