#include <cstring>
#include <iostream>

class PersonalContact{
private:
    char name[20];
    char phoneNumber[13];
    char email[30];
    char address[50];
public:

    PersonalContact(){};
    PersonalContact(PersonalContact &personal);
    void inputContact(char *inName, char *inPhoneNumber = NULL, char *inEmail=NULL, char *inAddress=NULL);
    void getContact(char *outName, char *outPhoneNumber , char *outEmail, char *outAddress);
    void editContact(char *inName, char *inPhoneNumber = NULL, char *inEmail=NULL, char *inAddress=NULL);


};
