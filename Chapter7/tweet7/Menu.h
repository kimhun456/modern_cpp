#include <cstring>
#include <iostream>

class Menu{
private:
    char topMenu[3][40];
    char ownerMenu[4][40];
    char contactMenu[7][40];
    int menuType;
public:
    Menu();
    void showMenu();
    void setMenuSelection(int selection);
    int execution();
};
