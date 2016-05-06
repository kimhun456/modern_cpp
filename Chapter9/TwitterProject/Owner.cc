#include <cstring>
#include "Owner.h"

using namespace std;

// 소유자 정보 입력
void Owner::inputOwnerInfo(char *inName, char *inPhoneNumber, char *inEmail, char *inAddress, char *inTwitterAccount) {
    if (inName != NULL)
        strcpy(name, inName);

    if (inPhoneNumber != NULL)
        strcpy(phoneNumber, inPhoneNumber);

    if (inEmail != NULL)
        strcpy(email, inEmail);

    if (inAddress != NULL)
        strcpy(address, inAddress);

    if (inTwitterAccount != NULL)
        strcpy(twitterAccount, inTwitterAccount);
}

// 소유자 정보 출력
void Owner::printOwnerInfo() {
    cout << "소유자 이름: " << name << endl;
    cout << "소유자 전화번호: " << phoneNumber << endl;
    cout << "소유자 이메일: " << email << endl;
    cout << "소유자 주소: " << address << endl;
    cout << "소유자 트위터 계정: " << twitterAccount << endl;
}

// 소유자 정보 수정
void Owner::editOwnerInfo(char *inName, char *inPhoneNumber, char *inEmail, char *inAddress, char *inTwitterAccount) {
    if (inName != NULL)
        strcpy(name, inName);

    if (inPhoneNumber != NULL)
        strcpy(phoneNumber, inPhoneNumber);

    if (inEmail != NULL)
        strcpy(email, inEmail);

    if (inAddress != NULL)
        strcpy(address, inAddress);

    if (inTwitterAccount != NULL)
        strcpy(twitterAccount, inTwitterAccount);
}
