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

    virtual void introduce(){
        cout << "name : " << name << " age : " << age << endl;
    }

};


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

    /**
     * 소멸자도 virtual키워드를 사용해서 overriding 시켜
     * delete를 통해 person 객체를 해제해도 호출 되게 한다.
    */
    virtual ~Chulsoo(){
        delete[] bookName;
        cout << "Chulsoo Destructor END"<<endl;
    }
    void write(){
        cout << "wrtie" <<endl;
    }

    virtual void introduce(){
        cout << "Chulsoo's introduce name : " << name  << " age :" << age << endl;
        cout << " Chulsoo's BookName : " << bookName <<endl;
    }

};

int main() {

    Person *personPtr = new Chulsoo("cjftn",32,"c++");
    personPtr->introduce();
    delete personPtr;
    return 0;
}
