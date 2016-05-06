#include <iostream>
#include <cstring>
using namespace std;

class Person{

    char *name;

public:

    //생성자
    Person(char *name){
        this->name = new char[strlen(name)+1];
        strcpy(this->name, name);
        cout << this->name << endl;
        cout << "Constuctor 생성 완료 " <<endl;
    }

    /** 소멸자 는 ~클래스명() 으로 정의 된다.
        반환형이 없고 함수 내부에 return 문을 쓸 수 없다.
        객체가 소멸할때 자동으로 호출
        -> 객체는 생성된 범위가 끝나는 지점
     */
    ~Person(){
        delete[] name;
        cout << "소멸자 완료" << endl;
    }
};

int main(){

    Person person("현재");
    cout << "메인 함수가 끝나는 지점 " << endl;
    return 0;
}
