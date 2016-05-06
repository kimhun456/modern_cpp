#include <iostream>

using namespace std;

class Chulsoo;

class YoungHee{
private:
    int age;
public:
    YoungHee(int age) :age(age){

        cout << "영희 생성자 완료" <<endl;

    }

    void introduce(){
        cout << "영희 나이 : " << age << endl;
    }

    void whoIsOlder(const Chulsoo& chulsooObj);

};

class Chulsoo{
private:
    int age;

public:
    Chulsoo(int age) :age(age){
        cout << "철수 생성자 완료" <<endl;
    }
    void introduce(){
        cout << "철수 나이 : " << age << endl;
    }

    friend void YoungHee::whoIsOlder(const Chulsoo& chulsooObj);


    //프렌드 클래스로 영희를 선언한다.
    //friend class YoungHee;
};


 void YoungHee::whoIsOlder(const Chulsoo &chulsooObj){

    // private 멤버인 age에 접근 할려고 했기 때문에 오류가 나온다.
    cout << "영희는 철수보다 " << ((age > chulsooObj.age)? "나이가 많다." : "나이가 같거나 적다.") <<endl;


}


int main(){
    Chulsoo chulsoo(32);

    chulsoo.introduce();

    YoungHee younghee(35);

    younghee.introduce();

    younghee.whoIsOlder(chulsoo);


    return 0;
}
