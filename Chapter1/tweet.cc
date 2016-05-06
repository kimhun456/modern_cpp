#include <iostream>


using namespace std;

struct OwnerInfo{


    char name[20];
    char phoneNumber[13];
    char email[30];
    char address[50];
    char twitterAccount[20];
};

struct ContactInfo{
    char name[20];
    char phoneNumber[13];
    char email[30];
    char address[50];
};

OwnerInfo owner;
ContactInfo contacts[100];

int contactNumber =  0;


void inputOwnerInfo(){
    cout << " Owener Name ";
    cin >> owner.name;


    cout << " Owener phoneNumber ";
    cin >> owner.phoneNumber;


    cout << " Owener Email ";
    cin >> owner.email;


    cout << " Owener Address ";
    cin >> owner.address;


    cout << " Owener Twitter Id ";
    cin >> owner.twitterAccount;


    cout << " Input Complete " << endl;


}

void outputOwnerInfo(){



    cout << " Owner Name : " << owner.name << endl;
    cout << " Owner Phone : " << owner.phoneNumber << endl;
    cout << " Owner Email : " << owner.email << endl;
    cout << " Owner Address : " << owner.address << endl;
    cout << " Owner Twitter : " << owner.twitterAccount << endl;

}

void addContact(){

    cout << " Contact Name : ";
    cin >> contacts[contactNumber].name;

    cout << " Contact PhoneNumber : ";
    cin >> contacts[contactNumber].phoneNumber;

    cout << " Contact Email : ";
    cin >> contacts[contactNumber].email;

    cout << " Contact address : ";
    cin >> contacts[contactNumber].address;

    contactNumber ++ ;
    cout << "input is completed" << endl;


}

void outputConctactList(){

    int i;

    for(i=0;i<contactNumber;i++){
        cout << i << " : " << contacts[i].name << endl;
    }


}

void runOwnerMenu(){
    int menuNum;

    do{

        cout << "1. Input Owner Info  " << endl;
        cout << "2. OutPut Owner Info  " << endl;
        cout << "3. Previous Page" << endl;
        cin >> menuNum;

        switch (menuNum) {
            case 1:
                inputOwnerInfo();
                break;
            case 2:
                outputOwnerInfo();
                break;

            case 3:
                cout << " Return to previous Page"<<endl;
                break;
            default:
                cout << "Wrong Input! , Please input again" << endl;
                break;
        }


    }while(menuNum !=3);


}

void runContactMenu(){

    int menuNum;

    do{

        cout << "1. Input Contact  " << endl;
        cout << "2. OutPut Contact List " << endl;
        cout << "3. Previous Page" << endl;
        cin >> menuNum;

        switch (menuNum) {
            case 1:
                addContact();
                break;
            case 2:
                outputConctactList();
                break;
            case 3:
                cout << " Return to previous Page"<<endl;
                break;
            default:
                cout << "Wrong Input! , Please input again" << endl;
                break;
        }


    }while(menuNum !=3);



}



void runMainMenu(){

    int menuNum;

    do{

        cout << "1. Owner Management " << endl;
        cout << "2. Contact Management " << endl;
        cout << "3. Program END" << endl;
        cin >> menuNum;

        switch (menuNum) {
            case 1:
                runOwnerMenu();
                break;
            case 2:
                runContactMenu();
                break;

            case 3:
                cout << " Program is ended"<<endl;
                break;
            default:
                cout << "Wrong Input! , Please input again" << endl;
                break;
        }


    }while(menuNum !=3);

}

int main(){

    runMainMenu();

    return 0;
}
