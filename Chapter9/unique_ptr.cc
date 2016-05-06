

/*
 new 와 delete를 사용해서 메모리를 관리할수 있습니다.

 new 와 delete를 사용해서 객체 생성시 생성자와 소멸자가 호출되지만
 malloc free를 사용해서 객체 생성시 생성자와 소멸자가 호출되지 않는다.
 */

#include <iostream>
#include <memory>

using namespace std;

class Chulsoo{
private:
    char *name;
    int *age;

public:

    Chulsoo(char *name, int age){
        this->name = new char[strlen(name)+1];
        strcpy(this->name, name);

        this->age = new int;
        *this->age = age;
        cout<< " CHULSOO 생성자 완료 "<< endl;

    }

    ~Chulsoo(){
        delete [] name;
        delete age;

        cout << "소멸자 완료 " <<endl;
    }

    void introduce();
};

void Chulsoo::introduce(){
    cout << "이름은  " <<name<< endl;
    cout << "나이는 " << *age<< endl;
}

int main(){

    Chulsoo *ptrChulsoo = new Chulsoo("현재",123);
    ptrChulsoo->introduce();
    delete ptrChulsoo;

    unique_ptr<Chulsoo> chulsooSmtpoint(new Chulsoo("스마트 포인터 ", 123));

    chulsooSmtpoint->introduce();

    // 유니크 포인터는 오직 하나의 동적 객체를 가르키고 있기 때문인데에엥
    // 오토 포인터와 다르게 포인터가 널을 갖게되면 컴파일시 오류를 내기 때문에 사용자에게 좀 더 좋은 경험을 주게 된다.
    unique_ptr<Chulsoo> chulsoo2 = chulsooSmtpoint;
    chulsooSmtpoint->introduce();
    chulsoo2->introduce();


    return 0;
}
