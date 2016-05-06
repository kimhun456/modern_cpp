
#include "Owner.h"

using namespace std;

void Owner::inputOwnerInfo(char *inName, char *inPhoneNumber, char *inEmail, char *inAddress,
                           char *inTweeterAccount) {
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
    if(inTweeterAccount != NULL){
        strcpy(tweeterAccount,inTweeterAccount);
    }

}

void Owner::printOwnerInfo() {

    cout <<"Owner Name: " << name << endl;
    cout <<"Owner Phone : " << phoneNumber << endl;
    cout <<"Owner email  : " << email << endl;
    cout <<"Owner Address  : " << address << endl;
    cout <<"Owner tweet account  : " << tweeterAccount << endl;

}

void Owner::editOwnerInfo(char *inName, char *inPhoneNumber, char *inEmail, char *inAddress, char *inTweeterAccount) {

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
    if(inTweeterAccount != NULL){
        strcpy(tweeterAccount,inTweeterAccount);
    }
}
