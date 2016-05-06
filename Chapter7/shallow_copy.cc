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
    /*
     *  이곳에서 얕은 복사에 의해 name이 두번 delete되어 사라지는 현상이 발생하게 된다.
     *
     */
    return 0;
}
