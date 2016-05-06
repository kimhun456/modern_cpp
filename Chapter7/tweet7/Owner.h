#include <iostream>
#include <cstring>
class Owner {
private:
    char name[20];
    char phoneNumber[13];
    char email[30];
    char address[50];
    char tweeterAccount[20];

public:

    void inputOwnerInfo(char *inName, char *inPhoneNumber = NULL, char *inEmail = NULL, char *inAddress = NULL,
                        char *inTweeterAccount = NULL);

    void printOwnerInfo();

    void editOwnerInfo(char *inName, char *inPhoneNumber = NULL, char *inEmail = NULL, char *inAddress = NULL,
                       char *inTweeterAccount = NULL);
};
