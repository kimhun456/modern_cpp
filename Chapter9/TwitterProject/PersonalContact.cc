#include <cstring>
#include "PersonalContact.h"

// 복사 생성자
PersonalContact::PersonalContact(PersonalContact &personal) {
    strcpy(name, personal.name);
    strcpy(phoneNumber, personal.phoneNumber);
    strcpy(email, personal.email);
    strcpy(address, personal.address);
}

// 연락처 입력
void PersonalContact::inputContact(char *inName, char *inPhoneNumber, char *inEmail, char *inAddress) {
    if (inName != NULL)
        strcpy(name, inName);

    if (inPhoneNumber != NULL)
        strcpy(phoneNumber, inPhoneNumber);

    if (inEmail != NULL)
        strcpy(email, inEmail);

    if (inAddress != NULL)
        strcpy(address, inAddress);
}

// 연락처 조회
void PersonalContact::getContact(char *outName, char *outPhoneNumber, char *outEmail, char *outAddress) {
    if (outName != NULL)
        strcpy(outName, name);

    if (outPhoneNumber != NULL)
        strcpy(outPhoneNumber, phoneNumber);

    if (outEmail != NULL)
        strcpy(outEmail, email);

    if (outAddress != NULL)
        strcpy(outAddress, address);
}

// 연락처 수정
void PersonalContact::editContact(char *inName, char *inPhoneNumber, char *inEmail, char *inAddress) {
    if (inName != NULL)
        strcpy(name, inName);

    if (inPhoneNumber != NULL)
        strcpy(phoneNumber, inPhoneNumber);

    if (inEmail != NULL)
        strcpy(email, inEmail);

    if (inAddress != NULL)
        strcpy(address, inAddress);
}
