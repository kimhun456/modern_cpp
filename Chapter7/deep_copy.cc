#include <iostream>
#include <cstring>

using namespace std;


class Chulsoo{
private :
    char *name;

public :
    Chulsoo(char *name){
        this->name = new char[strlen(name) + 1];
        strcpy(this->name,name);
        cout << "Chulsoo 생성자 완료 " << endl;

    }

    Chulsoo(){
        cout << "Chulsoo 생성자 완료 " << endl;
    };
    // 이곳이 깊은 복사를 실행하는 부분이다.
    // 깊은 복사는 디폴트 복사 생성자로 구현 할수 없으며 꼭 복사 생성자를 재정의 해야한다.
    Chulsoo(const Chulsoo& source){

        this->name = new char[strlen(source.name) +1];
        strcpy(this->name, source.name);
    }

    ~Chulsoo(){
        delete[] name;

        cout << "Chulsoo 소멸자 완료 " << endl;
    }

    void introduce(){
        cout << name<< endl;
    }

};

int main(){

    Chulsoo chulsoo("철수");
    Chulsoo chulhee(chulsoo);


    chulsoo.introduce();
    chulhee.introduce();
    return 0;
}
