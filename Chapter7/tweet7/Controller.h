#include <iostream>

#include "Contact.h"
#include "Menu.h"
#include "Owner.h"

/**
    헤더파일에는 선언과 정의 코드를 분리해서 넣게 된다.
    전처리 -> 컴파일-> 링크
    하나의 클래스는 하나의 cpp파일과 h파일을 갖게 된다.
*/
class Controller{
private :
    Contact contacts;
    Menu menu;
    Owner owner;

    void inputOwnerInfo();

    void printOwnerInfo();

    void editOwnerInfo();

    void addContact();

    void printContactList();

    void printContactDetail();

    void editContact();

    void copyContact();

    void removeContact();

    void runOwnerMenu();

    void runtContactMenu();

public:

    void runMainMenu();

};
