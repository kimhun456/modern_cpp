#include <iostream>
#include "PersonalContact.h"

class Contact{
private:
    PersonalContact contactInfo[100];
    int numberOfContact;

public:
    Contact();
    void inputContact(char *name, char *phoneNumber = NULL, char *email=NULL, char *address=NULL);

    void printContactList();

    void printContact(char *inName);
    void printContact(int index);
    void editContactByIndex(int index,char *name, char *phoneNumber = NULL, char *email=NULL, char *address=NULL );
    void copyContact(int index);
    void removeContactByIndex(int index);
};
