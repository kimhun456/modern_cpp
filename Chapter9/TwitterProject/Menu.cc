#include "Menu.h"
#include <cstring>

using namespace std;

Menu::Menu()                // 최상위 메뉴 정보 설정
{
    topMenu = new char *[numTopMenu];
    ownerMenu = new char *[numOwnerMenu];
    contactMenu = new char *[numContactMenu];

    int i;
    for (i = 0; i < numTopMenu; i++)
        topMenu[i] = new char[50];

    for (i = 0; i < numOwnerMenu; i++)
        ownerMenu[i] = new char[50];

    for (i = 0; i < numContactMenu; i++)
        contactMenu[i] = new char[50];

    strcpy(topMenu[0], "1. 소유자 관리 기능");
    strcpy(topMenu[1], "2. 연락처 관리 기능");
    strcpy(topMenu[2], "3. 프로그램 종료");

    strcpy(ownerMenu[0], "1. 소유자 정보 입력");
    strcpy(ownerMenu[1], "2. 소유자 정보 조회");
    strcpy(ownerMenu[2], "3. 소유자 정보 수정");
    strcpy(ownerMenu[3], "4. 이전 메뉴로");

    strcpy(contactMenu[0], "1. 연락처 추가 입력");
    strcpy(contactMenu[1], "2. 연락처 목록 조회");
    strcpy(contactMenu[2], "3. 연락처 상세 조회");
    strcpy(contactMenu[3], "4. 개별 연락처 수정");
    strcpy(contactMenu[4], "5. 연락처 복사");
    strcpy(contactMenu[5], "6. 개별 연락처 제거");
    strcpy(contactMenu[6], "7. 트위터 연락처 연동");
    strcpy(contactMenu[7], "8. 이전 메뉴로");

    // 메뉴 기본값 0(최상위 메뉴)
    menuType = 0;
}

Menu::~Menu()                           // 소멸자 – 메뉴 정보 메모리 해제
{
    int i;
    for (i = 0; i < numTopMenu; i++)
        delete[] topMenu[i];

    for (i = 0; i < numOwnerMenu; i++)
        delete[] ownerMenu[i];

    for (i = 0; i < numContactMenu; i++)
        delete[] contactMenu[i];

    delete[] topMenu;
    delete[] ownerMenu;
    delete[] contactMenu;
}

void Menu::showMenu()                 // 현재 메뉴 선택 상태를 통해 메뉴 목록 출력
{
    int i;
    if (menuType == 0) {
        for (i = 0; i < numTopMenu; i++)
            cout << topMenu[i] << endl;
    }
    else if (menuType == 1) {
        for (i = 0; i < numOwnerMenu; i++)
            cout << ownerMenu[i] << endl;
    }
    else if (menuType == 2) {
        for (i = 0; i < numContactMenu; i++)
            cout << contactMenu[i] << endl;
    }
}

void Menu::setMenuSelection(int selection)       // 첫번째 단계 메뉴 선택
{
    menuType = selection;
}

int Menu::execution()                  // 선택한 메뉴 실행
{
    int selection;
    showMenu();
    cin >> selection;
    return selection;
}