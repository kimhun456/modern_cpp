

/*
    new 와 delete를 사용해서 메모리를 관리할수 있습니다.

    new 와 delete를 사용해서 객체 생성시 생성자와 소멸자가 호출되지만
    malloc free를 사용해서 객체 생성시 생성자와 소멸자가 호출되지 않는다.
 */

#include <iostream>

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

    Chulsoo c("gg",123);


    return 0;
}
