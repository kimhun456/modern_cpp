#include "Menu.h"

using namespace std;

Menu::Menu() {

    strcpy(topMenu[0],"1. Owner manage  ");
    strcpy(topMenu[1],"2. Contact Manage");
    strcpy(topMenu[2],"3. Program Exit ");

    strcpy(ownerMenu[0],"1. Owner Info input");
    strcpy(ownerMenu[1],"2. Owner Info inquire");
    strcpy(ownerMenu[2],"3. Owner Info modify ");
    strcpy(ownerMenu[3],"4. prevous Menu ");

    strcpy(contactMenu[0],"1. Contacts add ");
    strcpy(contactMenu[1],"2. Search  Contact List ");
    strcpy(contactMenu[2],"3. Search detail Contact  ");
    strcpy(contactMenu[3],"4. Modify Contact");
    strcpy(contactMenu[4],"5. Copy Contact");
    strcpy(contactMenu[5],"6. Delete Contact");
    strcpy(contactMenu[6],"7. Previous Menu ");

    menuType = 0;
}

void Menu::showMenu() {

    if(menuType==0){
        cout << topMenu[0] << endl;
        cout << topMenu[1] << endl;
        cout << topMenu[2] << endl;
    }else if(menuType == 1){

        cout << ownerMenu[0] << endl;
        cout << ownerMenu[1] << endl;
        cout << ownerMenu[2] << endl;
        cout << ownerMenu[3] << endl;
    }else if(menuType == 2){

        cout << contactMenu[0] << endl;
        cout << contactMenu[1] << endl;
        cout << contactMenu[2] << endl;
        cout << contactMenu[3] << endl;
        cout << contactMenu[4] << endl;
        cout << contactMenu[5] << endl;
        cout << contactMenu[6] << endl;
    }

}

void Menu::setMenuSelection(int selection) {
    menuType = selection;
}

int Menu::execution() {
    int selection;
    showMenu();
    cin>>selection;
    return selection;

}
