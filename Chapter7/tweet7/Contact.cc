#include "Contact.h"

using namespace std;

Contact::Contact() {
    numberOfContact = 0;
}

// 연락처 정보 입력
void Contact::inputContact(char *name, char *phoneNumber, char *email, char *address) {
    contactInfo[numberOfContact].inputContact(name,phoneNumber,email,address);
    numberOfContact++;
}

void Contact::printContactList() {

    char name[20];

    for(int i=0; i<numberOfContact;i++){
        contactInfo[i].getContact(name,NULL,NULL,NULL);
        cout << i << " : " << name<< endl;
    }

}

void Contact::printContact(int index) {
    char name[20];
    char phoneNumber[13];
    char email[30];
    char address[50];

    contactInfo[index].getContact(name,phoneNumber,email,address);

    cout << index << "st index Contact inquire" << endl;
    cout << "Contact Name : " << name << endl;
    cout << "Contact phoneNumber : " << phoneNumber << endl;
    cout << "Contact email : " << email << endl;
    cout << "Contact address : " << address << endl;
}

void Contact::printContact(char *inName) {
    char name[20];
    char phoneNumber[13];
    char email[30];
    char address[50];

    cout << "Contact what have a name of " << inName << endl;


    for(int i=0;i<numberOfContact;i++){

        contactInfo[i].getContact(name,phoneNumber,email,address);

        if(strcmp(inName,name ) == 0){

            cout << "Contact Name : " << name << endl;
            cout << "Contact phoneNumber : " << phoneNumber << endl;
            cout << "Contact email : " << email << endl;
            cout << "Contact address : " << address << endl;
        }
    }

}

void Contact::editContactByIndex(int index, char *name, char *phoneNumber, char *email, char *address) {
    contactInfo[index].editContact(name,phoneNumber,email,address);
}

void Contact::copyContact(int index) {
    contactInfo[numberOfContact] = PersonalContact(contactInfo[index]);
    numberOfContact++;
}

void Contact::removeContactByIndex(int index) {
    if(index >=numberOfContact || index <0){
        cout << index << "can't remove Index" << endl;
        return;
    }

    for(int i= index+1;i<numberOfContact;i++){
        contactInfo[i-1] = contactInfo[i];
    }

    numberOfContact--;
}
