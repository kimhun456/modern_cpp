#ifndef _CONTROLLER_H_
#define _CONTROLLER_H_

#include "Contact.h"
#include "Menu.h"
#include "Owner.h"

class Controller{
private:
    Contact contacts;       // 연락처 관리
    Menu menu;           // 메뉴
    Owner owner;          // 소유자 관리

    // 소유자 정보 입력
    void inputOwnerInfo();

    // 소유자 정보 출력
    void printOwnerInfo();

    // 소유자 정보 수정
    void editOwnerInfo();


    // 연락처 정보 입력
    void addContact();

    // 연락처 전체 목록 조회
    void printContactList();

    // 연락처 상세 조회
    void printContactDetail();

    // 연락처 수정
    void editContact();

    // 연락처 복사
    void copyContact();

    // 연락처 제거
    void removeContact();

    // 트위터 계정 연동
    void syncTwitter();

    // 소유자 메뉴 실행
    void runOwnerMenu();

    // 연락처 메뉴 실행
    void runContactMenu();

public:
    // 메인 메뉴 실행
    void runMainMenu();
};

#endif