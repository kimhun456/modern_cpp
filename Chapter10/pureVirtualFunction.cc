#include <iostream>
#include <cstring>
#include <memory>

using namespace std;

#define NAME_LEN 20

class Person{
protected:
    char *name;
    int age;

public:
    Person(char *name, int age){
        this->name = new char[strlen(name)+1];
        strcpy(this->name, name);
        this->age = age;
        cout << "Person Constructor END " << endl;

    }
    virtual ~Person(){
        delete[] name;
        cout << "Person Destructor END" << endl;
    }


    /**
     *  virtual void 함수명() = 0;
     *  순수가상 함수로서 함수 오버라이딩을 통해 다형성을 동작하게 한다.
     *
     *
     */
    virtual void introduce()=0;
    virtual void eat()=0;
    virtual void sleep();

};

void Person::sleep() {
    cout <<"Person is sleeping"<<endl;
}


class Chulsoo : public Person{
private:
    char *bookName;
public:
    Chulsoo(char *name, int age, char * bookName):Person(name,age)
    {
        this->bookName = new char[strlen(bookName) +1];
        strcpy(this->bookName , bookName);
        cout << "Chulsoo Constructor END " << endl;
    }

    virtual ~Chulsoo(){
        delete[] bookName;
        cout << "Chulsoo Destructor END"<<endl;
    }
    virtual void eat(){
        cout << "Chulsoo's EAT" <<endl;
    }
    virtual void sleep(){
        cout << "Chulsoo's SLEPP" <<endl;
    }

    virtual void introduce(){
        cout << "Chulsoo's introduce name : " << name  << " age :" << age << endl;
        cout << " Chulsoo's BookName : " << bookName <<endl;
    }

};

int main() {

    Person *person = new Chulsoo("철",12,"c++");
    person->introduce();
    delete person;

    return 0;
}
