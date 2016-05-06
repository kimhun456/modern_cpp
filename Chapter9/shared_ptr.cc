

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

    /**
     웬만하면 포인터 대신 스마트 포인터를 사용하여 객체를 관리하는 것이 나한테 더 이득인듯 하다.
     왜냐면 걔는 new ,delete쌍으로 관리햬야 되지만 얘는 한번에 관리해준다.
     */

    /**
        shared_ptr의 경우 하나의 객체를 여러개의 포인터가 가르킬수 있는 스마트 포인터이다.
        shared_ptr의 경우 레퍼런스 카운팅을 사용하기 때문에 동적 객체를 사용하는 스마트포인터가 몇개 생성되었는지 보구
        레퍼런스 카운팅이 0에 도달 하였을때 객체를 해제하게 된다.
     */
    shared_ptr<Chulsoo> chulsooSmtpoint(new Chulsoo("스마트 포인터 ", 123));
    shared_ptr<Chulsoo> chulsoo2 = chulsooSmtpoint;
    chulsooSmtpoint->introduce();
    chulsoo2->introduce();


    return 0;
}
