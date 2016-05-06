#include <iostream>

using namespace std;

/*
 * Person이 철수 와 영희를 생성할 떄 한벅씩 생성되어
 *
 * 총 2번이나 생성되게 된다.
 *
 *
 */
class Person{
public:
    Person(){
        cout << "Person Constructor" << endl;
    }
    virtual ~Person(){
        cout << "Person Destroyer" << endl;
    }

    virtual void write() = 0;
};

class Chulsoo:public Person{
public:
    Chulsoo():Person(){
        cout << "Chulsoo Constructor" << endl;
    }

    ~Chulsoo(){
        cout << "Chulsoo Destroyer"<<endl;
    }

    virtual void write(){
        cout <<"Wirte  is good" << endl;
    }
};

class YoungHee:public Person{
public:
    YoungHee():Person(){
        cout << "YoungHee Constructor" << endl;
    }

    ~YoungHee(){
        cout << "YoungHee Destroyer"<<endl;
    }

    virtual void write(){
        cout <<"Wirte  is bad" << endl;
    }
};


class YoungChul:public Chulsoo, public YoungHee{
public:
    YoungChul():Chulsoo(),YoungHee(){
        cout << "YoungChul Constructor" << endl;
    }

    ~YoungChul(){
        cout << "YoungChul Destroyer"<<endl;
    }


    /**
     * 다중상속의 모호성이 있을수 있다.
     */
    virtual void write(){
        Chulsoo::write();
    }
};


int main(){

    YoungChul yc;
    yc.write();


    return 0;
}
