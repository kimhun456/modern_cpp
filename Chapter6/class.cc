#include <iostream>
#include <cstring>

using namespace std;


#define NAME_LEN 20
#define SEX_LEN 10
#define JOB_LEN 20
#define CHARACTER_LEN 20

class Chulsoo{
private:
    char name[NAME_LEN];
    char sex[SEX_LEN];
    char job[JOB_LEN];
    char character[CHARACTER_LEN];
    int age;
    bool marriageStatus;

public:
    void introduce(){
        cout << " name : " << name << endl;
        cout << " sex : " << sex << endl;
        cout << " job : " << job << endl;
        cout << " character : " << character << endl;
        cout << " age : " << age << endl;
        cout << " marriageStatus : " << (marriageStatus ? "YES" : "NO") << endl;

    }
    void eat(char *food){
        cout << "Chulsoo is eating the " << food << endl;
    }
    void sleep(){
        cout << " Chulsoo is sleeping now " << endl;
    }
    void dirve(char * destination){
        cout << "Chulsoo is drive to the " << destination << endl;
    }
    void write(){
        cout << "Chulsoo write the Book" << endl;
    }
    void read(){
        cout << "Chulsoo read the Book" << endl;
    }
    void constuctor(char *name, char *sex, char *job, char *character , int age, bool marriageStatus){
        strcpy(this->name,name);
        strcpy(this->sex, sex);
        strcpy(this->job, job);
        strcpy(this->character, character);
        this->age = age;
        this-> marriageStatus = marriageStatus;

    };

};



class YoungHee{
private:
    char name[NAME_LEN];
    char sex[SEX_LEN];
    char job[JOB_LEN];
    char character[CHARACTER_LEN];
    int age;
    bool marriageStatus;

public:
    void introduce(){
        cout << " name : " << name << endl;
        cout << " sex : " << sex << endl;
        cout << " job : " << job << endl;
        cout << " character : " << character << endl;
        cout << " age : " << age << endl;
        cout << " marriageStatus : " << (marriageStatus ? "YES" : "NO") << endl;

    }
    void eat(char *food){
        cout << "YoungHee is eating the " << food << endl;
    }
    void sleep(){
        cout << " YoungHee is sleeping now " << endl;
    }
    void dirve(char * destination){
        cout << "YoungHee is drive to the " << destination << endl;
    }
    void write(){
        cout << "YoungHee write the Book" << endl;
    }
    void read();
    void constuctor(char *name, char *sex, char *job, char *character , int age, bool marriageStatus){
        strcpy(this->name,name);
        strcpy(this->sex, sex);
        strcpy(this->job, job);
        strcpy(this->character, character);
        this->age = age;
        this-> marriageStatus = marriageStatus;

    };

};

void YoungHee::read(){
    cout << "is this overrideing?" << endl;
}


int main(){

    Chulsoo chulsoo;

    YoungHee youngHee;

    chulsoo.constuctor("철수", "남성", "작가", "dilight",32,true);
    youngHee.constuctor("영희", "여성", "작가", "dilight",32,true);
    chulsoo.introduce();
    youngHee.introduce();
    youngHee.read();

    return 0;
}
