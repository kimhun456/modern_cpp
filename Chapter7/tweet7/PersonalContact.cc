#include "PersonalContact.h"

PersonalContact::PersonalContact(PersonalContact &personal) {
    strcpy(name,personal.name);
    strcpy(phoneNumber, personal.phoneNumber);
    strcpy(email, personal.email);
    strcpy(address, personal.address);

}

void PersonalContact::inputContact(char *inName, char *inPhoneNumber, char *inEmail, char *inAddress) {


    if(inName != NULL){
        strcpy(name,inName);
    }

    if(inPhoneNumber != NULL){
        strcpy(phoneNumber,inPhoneNumber);
    }
    if(inEmail != NULL){
        strcpy(email,inEmail);
    }
    if(inAddress != NULL){
        strcpy(address,inAddress);
    }

}


/*
 *  포인터를 전달하고 그 포인터로 현재 가지고 있는 값을 복사하게 된다.
 *
 *
 */
void PersonalContact::getContact(char *outName, char *outPhoneNumber, char *outEmail, char *outAddress) {

    if(outName!=NULL){
        strcpy(outName,name);
    }
    if(outPhoneNumber!=NULL){
        strcpy(outPhoneNumber,phoneNumber);
    }
    if(outEmail!=NULL){
        strcpy(outEmail,email);
    }
    if(outAddress!=NULL){
        strcpy(outAddress,address);
    }

}

void PersonalContact::editContact(char *inName, char *inPhoneNumber, char *inEmail, char *inAddress) {

    if(inName != NULL){
        strcpy(name,inName);
    }

    if(inPhoneNumber != NULL){
        strcpy(phoneNumber,inPhoneNumber);
    }
    if(inEmail != NULL){
        strcpy(email,inEmail);
    }
    if(inAddress != NULL){
        strcpy(address,inAddress);
    }


}