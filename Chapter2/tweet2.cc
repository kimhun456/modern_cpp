#include <iostream>

void runMainMenu();
void inputOwnerInfo();
void outputOwnerInfo();
void addContact();
void outputConctactList();
void runOwnerMenu();
void runContactMenu();
void runMainMenu();
void editOwnerInfo();
int removeContactByIndex(int index);
void printContactInfoByIndex(int index);

using namespace std;

struct OwnerInfo {


	char name[20];
	char phoneNumber[13];
	char email[30];
	char address[50];
	char twitterAccount[20];
};

struct ContactInfo {
	char name[20];
	char phoneNumber[13];
	char email[30];
	char address[50];
};

OwnerInfo owner;
ContactInfo contacts[100];

int contactNumber = 0;


void inputOwnerInfo() {
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

void outputOwnerInfo() {



	cout << " Owner Name : " << owner.name << endl;
	cout << " Owner Phone : " << owner.phoneNumber << endl;
	cout << " Owner Email : " << owner.email << endl;
	cout << " Owner Address : " << owner.address << endl;
	cout << " Owner Twitter : " << owner.twitterAccount << endl;

}

void addContact() {

	cout << " Contact Name : ";
	cin >> contacts[contactNumber].name;

	cout << " Contact PhoneNumber : ";
	cin >> contacts[contactNumber].phoneNumber;

	cout << " Contact Email : ";
	cin >> contacts[contactNumber].email;

	cout << " Contact address : ";
	cin >> contacts[contactNumber].address;

	contactNumber++;
	cout << "input is completed" << endl;


}

void outputConctactList() {

	int i;

	for (i = 0; i<contactNumber; i++) {
		cout << i << " : " << contacts[i].name << endl;
	}


}

void runOwnerMenu() {
	int menuNum;

	do {

		cout << "1. Input Owner Info  " << endl;
		cout << "2. OutPut Owner Info  " << endl;
		cout << "3. Modify Owner Info  " << endl;
		cout << "4. Previous Page" << endl;
		cin >> menuNum;

		switch (menuNum) {
		case 1:
			inputOwnerInfo();
			break;
		case 2:
			outputOwnerInfo();
			break;
		case 3:
			editOwnerInfo();
			break;

		case 4:
			cout << " Return to previous Page" << endl;
			break;
		default:
			cout << "Wrong Input! , Please input again" << endl;
			break;
		}


	} while (menuNum != 4);


}

void runContactMenu() {

	int menuNum;
	int index;
	int result;
	do {

		cout << "1. Input Contact  " << endl;
		cout << "2. OutPut Contact List " << endl;
		cout << "3. Delete Contact  " << endl;
		cout << "4. Search Contact  " << endl;
		cout << "5. Previous Page" << endl;
		cin >> menuNum;

		switch (menuNum) {
		case 1:
			addContact();
			break;
		case 2:
			outputConctactList();
			break;
		case 3:
			cout << "input the delete contact index : ";
			cin >> index;
			result = removeContactByIndex(index);
			if (result == 1) {
				cout << "Success delete" << endl;
			}
			else {
				cout << "Delete Fail" << endl;
			}
			break;
		case 4:

			cout << "want to search Index : ";
			cin >> index;
			printContactInfoByIndex(index);
			break;
		case 5:
			cout << " Return to previous Page" << endl;
			break;
		default:
			cout << "Wrong Input! , Please input again" << endl;
			break;
		}


	} while (menuNum != 5);



}



void runMainMenu() {

	int menuNum;

	do {

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
			cout << " Program is ended" << endl;
			break;
		default:
			cout << "Wrong Input! , Please input again" << endl;
			break;
		}


	} while (menuNum != 3);

}


void editOwnerInfo() {
	int inputNum;


	cout << "1. Owner Name Modify" << endl;
	cout << "2. Owner PhoneNumber Modify" << endl;
	cout << "3. Owner Email Modify" << endl;
	cout << "4. Owner Address Modify" << endl;
	cout << "5. Owner Tweet Modify" << endl;
	cout << "6. Not Change" << endl;

	cin >> inputNum;

	switch (inputNum) {
	case 1:
		cin >> owner.name;
		cout << "Owner name is modified" << endl;
		break;
	case 2:
		cin >> owner.phoneNumber;
		cout << "Owner phoneNumber is modified" << endl;
		break;
	case 3:
		cin >> owner.email;
		cout << "Owner email is modified" << endl;
		break;
	case 4:
		cin >> owner.address;
		cout << "Owner address is modified" << endl;
		break;
	case 5:
		cin >> owner.twitterAccount;
		cout << "Owner twitterAccount is modified" << endl;
		break;
	default:
		cout << "Nothin Changed" << endl;

		break;

	}

}

int removeContactByIndex(int index) {

	if (index >= contactNumber && index < 0) {
		return 0;
	}
	int i;

	for (i = index + 1; i < contactNumber; i++) {
		*(contacts + i - 1) = *(contacts + i);
	}
	contactNumber--;

	return 1;
}

void printContactInfoByIndex(int index) {


	cout << "Contact Name : " << contacts[index].name << endl;
	cout << "Contact Phone : " << contacts[index].phoneNumber << endl;
	cout << "Contact email : " << contacts[index].email << endl;
	cout << "Contact Address : " << contacts[index].address << endl;
}

int main() {

	runMainMenu();

	return 0;
}
