#include <iostream>
#include <cstring>

using namespace std;

#define NAME_LEN 20

class Person{
private:
    char name[NAME_LEN];
    int age;

public:
    Person(char *name, int age){
        strcpy(this->name, name);
        this->age = age;
        cout << "Person Constructor END " << endl;

    }
    ~Person(){
        cout << "Person Destructor END" << endl;
    }

    void introduce(){
        cout << "name : " << name << " age : " << age << endl;
    }

    void eat(){
        cout << "eat"<< endl;
    }
    void sleep(){
        cout << " sleep " << endl;
    }
};

/**
    상위클래스의 생성자 호출을 하고 나서 하위클래스의 생성자가 호출된다.
    그렇기 떄문에 멤버초기화를 통해 명시적으로 초기화하는것이 코드의 가독성을 높이며,
    런타임에서 의도하지 않은 오류를 예방할수 있다.
*/
class Chulsoo : public Person{
private:
    int numOfBooks;
public:
    Chulsoo(char *name, int age, int numOfBooks):Person(name,age)
    {
        this->numOfBooks = numOfBooks;
        cout << "Chulsoo Constructor END " << endl;
    }

    /**
        소멸자는 생성자와 반대로
        하위클래스 -> 상위클래스 순서대로 소멸된다.
    */
    ~Chulsoo(){
        cout << "Chulsoo Destructor END"<<endl;
    }
    void write(){
        cout << "wrtie" <<endl;
    }

};

class Younghee : public Person{
private:
    int numOfFlowers;
public:
    Younghee(char *name, int age, int numOfFlowers) : Person(name,age){
        this->numOfFlowers = numOfFlowers;
        cout << " Younghee Constructor END" << endl;
    }

    ~Younghee(){
        cout << "Younghee Destructor END" << endl;
    }

    void Shopping(){
        cout << "shopping" << endl;
    }
};


int main() {

    cout << "Create Person Class " << endl;
    Person person("Person",123);
    person.eat();
    person.introduce();
    person.sleep();

    cout << "Chulsoo Object" <<endl;

    Chulsoo chulsoo("CS",20,13);
    chulsoo.sleep();
    chulsoo.eat();
    chulsoo.write();
    chulsoo.introduce();

    Younghee younghee("YH",21,13);
    younghee.sleep();
    younghee.introduce();
    younghee.Shopping();




    return 0;
}
