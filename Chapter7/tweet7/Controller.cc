#include "Controller.h"
using namespace std;

void Controller::inputOwnerInfo() {


    char name[20];
    char phoneNumber[13];
    char email[30];
    char address[50];
    char tweeterAccount[20];

    cout << "owner Name :";
    cin >> name;
    cout << "owner phoneNumber :";
    cin >> phoneNumber;
    cout << "owner email :";
    cin >> email;
    cout << "owner address :";
    cin >> address;
    cout << "owner tweeterAccount :";
    cin >> tweeterAccount;

    cout << "Input is compelted "<< endl;

    owner.inputOwnerInfo(name,phoneNumber,email,address,tweeterAccount);

}

void Controller::printOwnerInfo() {
    owner.printOwnerInfo();
}

void Controller::editOwnerInfo() {
    char editString[50];
    int inputNum;

    cout << "1. Modify Owner name  " << endl;
    cout << "2. Modify Owner phoneNumbe  " << endl;
    cout << "3. Modify Owner email " << endl;
    cout << "4. Modify Owner address " << endl;
    cout << "5. Modify Owner tweeterAccount " << endl;
    cout << "6. no Modify back  " << endl;

    cin >> inputNum;

    switch (inputNum){
        case 1:
            cout<<"input the name : ";
            cin >> editString;
            owner.editOwnerInfo(editString,NULL,NULL,NULL,NULL);
            cout << "Owner Name is modified " << endl;
            break;
        case 2:
            cout<<"input the phoneNumber : ";
            cin >> editString;
            owner.editOwnerInfo(NULL,editString,NULL,NULL,NULL);
            cout << "Owner phoneNumber is modified " << endl;
            break;
        case 3:
            cout<<"input the email : ";
            cin >> editString;
            owner.editOwnerInfo(NULL,NULL,editString,NULL,NULL);
            cout << "Owner email is modified " << endl;
            break;
        case 4:
            cout<<"input the address : ";
            cin >> editString;
            owner.editOwnerInfo(NULL,NULL,NULL,editString,NULL);
            cout << "Owner address is modified " << endl;
            break;
        case 5:
            cout<<"input the tweeterAccount : ";
            cin >> editString;
            owner.editOwnerInfo(NULL,NULL,NULL,NULL,editString);
            cout << "Owner tweeterAccount is modified " << endl;
            break;
        default:
            cout <<"Nothing is modified " << endl;

    }

}

void Controller::addContact() {

    char name[20];
    char phoneNumber[13];
    char email[30];
    char address[50];

    cout << "Name : ";
    cin >> name;
    cout << "phoneNumber : ";
    cin >> phoneNumber;
    cout << "email : ";
    cin >> email;
    cout << "address : ";
    cin >> address;

    contacts.inputContact(name,phoneNumber,email,address);


}

void Controller::printContactList() {
    contacts.printContactList();
}

void Controller::printContactDetail() {

    int inputNum;
    int index;
    char name[20];
    cout << "1. contact search from index " << endl;
    cout << "2. Contact search form Name " << endl;

    cin>>inputNum;

    switch (inputNum){
        case 1:
            cout <<"Contact Index : " ;
            cin >> index;
            contacts.printContact(index);
            break;

        case 2:
            cout <<"Contact Name : ";
            cin >> name;
            contacts.printContact(name);
            break;

        default:
            cout << "wrong input return to previous Menu" << endl;
    }


}

void Controller::editContact() {

    int index;
    cout << "input index to modify:";
    cin >> index;


    char editString[50];
    int inputNum;

    cout << "1. Contact  name  " << endl;
    cout << "2. Contact phoneNumber   " << endl;
    cout << "3. Contact email  " << endl;
    cout << "4. Contact address  " << endl;
    cout << "5. back  " << endl;

    cin >> inputNum;

    switch (inputNum){
        case 1:
            cout<<"input the name : ";
            cin >> editString;
            contacts.editContactByIndex(index,editString,NULL,NULL,NULL);
            cout << "contacts Name is modified " << endl;
            break;
        case 2:
            cout<<"input the phoneNumber : ";
            cin >> editString;
            contacts.editContactByIndex(index,NULL,editString,NULL,NULL);
            cout << "contacts phoneNumber is modified " << endl;
            break;
        case 3:
            cout<<"input the email : ";
            cin >> editString;
            contacts.editContactByIndex(index,NULL,NULL,editString,NULL);
            cout << "contacts email is modified " << endl;
            break;
        case 4:
            cout<<"input the address : ";
            cin >> editString;
            contacts.editContactByIndex(index,NULL,NULL,NULL,editString);
            cout << "contacts address is modified " << endl;
            break;
        default:
            cout <<"Nothing is modified " << endl;

    }

}

void Controller::copyContact() {
    int index;
    cout << " Contact index : ";
    cin >> index;

    contacts.copyContact(index);
}

void Controller::removeContact() {
    int index;
    cout << " Contact index : ";
    cin >>index;
    contacts.removeContactByIndex(index);
}

void Controller::runOwnerMenu() {
    int menuNum;
    do{
        menu.setMenuSelection(1);
        menuNum = menu.execution();

        switch (menuNum){
            case 1:
                inputOwnerInfo();
                break;
            case 2:
                printOwnerInfo();
                break;
            case 3:
                editOwnerInfo();
                break;
            case 4:
                cout <<"Back "<<endl;
                break;
            default:
                cout <<"wrong input " << endl;
        }

    }while(menuNum!=4);

}

void Controller::runtContactMenu() {
    int menuNum;
    do{
        menu.setMenuSelection(2);
        menuNum = menu.execution();

        switch (menuNum){
            case 1:
                addContact();
                break;
            case 2:
                printContactList();
                break;
            case 3:
                printContactDetail();
                break;
            case 4:
                editContact();
                break;
            case 5:
                copyContact();
                break;
            case 6:
                removeContact();
                break;
            case 7:
                cout <<"BAck. "<<endl;
                break;
            default:
                cout <<"wrong input " << endl;
        }

    }while(menuNum!=7);

}


void Controller::runMainMenu() {
    int menuNum;
    do{
        menu.setMenuSelection(0);
        menuNum = menu.execution();

        switch (menuNum){
            case 1:
                runOwnerMenu();
                break;
            case 2:
                runtContactMenu();
                break;
            case 3:
                cout <<"End the Program."<<endl;
                break;
            default:
                cout <<"wrong input " << endl;
        }

    }while(menuNum!=3);
}