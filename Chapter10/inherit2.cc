#include <iostream>
#include <cstring>

using namespace std;

#define NAME_LEN 20

class Person{
private:
    int agePrivate;
protected:
    int ageProtected;
public:
    int agePublic;
    Person( int age):agePrivate(age),ageProtected(age),agePublic(age){

    }
    ~Person(){

    }

};

/**
    접근 지정자에 따라 어떻게 상속을 받을지가 결정이된다.

    public의 경우 private멤버는 접근 불가하지만 다른 protected와 public 멤버는 유지되게 된다.
    protected의 경우 여전히 priavte 멤버는 접근 불가능하고 public멤버는 protected멤버로 변경되게 된다.(일단 protected로 선언되면 그 아래는 모두 protected로?)
    private 의경우 public,protected 멤버는 모두 private멤버로 변경되게 된다.(더이상 상속을 쓸수 없게 되는 느낌? like final)

    대부분 public 상속을 많이쓰게된다.

*/
class Chulsoo : public Person{
private:
    int numOfBooks;
public:
    Chulsoo(int age, int numOfBooks):Person(age),numOfBooks(numOfBooks)
    {
        cout << "Chulsoo Constructor END " << endl;
    }
    ~Chulsoo(){
        cout << "Chulsoo Destructor END"<<endl;
    }
    void introduce(){
//        cout <<agePrivate<<endl;
        cout << agePublic <<endl;
        cout << ageProtected <<endl;
    }

};

int main() {

    cout << "Create Person Class " << endl;
    Person person(123);

    cout << "Chulsoo Object" <<endl;

    Chulsoo chulsoo(20,13);
    chulsoo.introduce();




    return 0;
}
