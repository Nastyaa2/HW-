#include <iostream>
#include <stdlib.h>

#include "windows.h"

using namespace std;

int count = 0;

const int maxx = 100000;
int mas[maxx];
int mas2[maxx];


string Addelastname[maxx] = { };

string Addname[maxx] = {};



int Idnum[maxx + 1] = {};

string alf[27] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K","L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z" };


string Idal[maxx + 1] = {};

string BirthDate[maxx] = {};



void AddInf() {

	system("CLS");
	int id[20];
	char name[50];
	char date[10];
	char surname[20];

	int max = 1000000;



	cout << "----------------------------------" << endl;
	cout << "|           ADD INFO             |   " << endl;
	cout << "----------------------------------" << endl;


	cin.ignore();


	cout << "ENTER NAME: " << endl;


	cin.getline(name, 50);

	cout << "ENTER SURNAME" << endl;

	cin.getline(surname, 20);

	cout << "ENTER BIRTH DATE: " << endl;

	cin.getline(date, 10);




	for (int i = 0; i < maxx; i++) {


		int count = 0;

		int min = 1000;
		int max1 = 9999;

		srand(time(0));

		if (Addname[i] == "") {


			int randindx = rand() % (sizeof(alf) / sizeof(alf[0]));
			Idal[i] = alf[randindx];

			mas[i] = min + rand() % (max1 - min + 1);
			mas2[i] = min + rand() % (max1 - min + 1);

			Addname[i] = name;
			Addelastname[i] = surname;
			BirthDate[i] = date;


			break;


		}


	}
};



void Delete() {

	system("CLS");

	int count = 0;

	int search;
	int answer;
	


	cout << "--------------------------------------------------------------------------------------------------------" << endl;
	cout << "| # |    ID          |       NAME      |            SURNAME          |         BIRTH DATE              |" << endl;
	cout << "--------------------------------------------------------------------------------------------------------" << endl;



	for (int k = 0; k < maxx; k++) {

		if (Addname[k] != "") {
			for (int h = 0; h < maxx; h++) {
				count++;


				cout << count << ")    " << Idal[h] << mas[h] << "-" << Idal[h] << mas2[h] << "           " << Addname[h] << "               " << Addelastname[h] << "                        " << BirthDate[h] << endl;
				
				if (Addname[h] == "") {
					break;
				}
			}

		}
		else {

			cout << "List is empty!" << endl;
			break;
		}



		cout << "--------------------------------------------------------------------------------------------------------" << endl;
		cout << "please, enter serial number: " << endl;


		cin >> search;

		cout << Addname[search - 1] << endl;

		if (Addname[search - 1] == "" ) {
			cout << "this number does not exist!";
			Sleep(1000);
			system("CLS");
			break;
		}

		cout << " Do you want to REMOVE it ?" << endl;

		cout << "|1 - YES|       |2 - NO|" << endl;

		cin >> answer;
		if (answer == 1) {

			for (int g = 0; g < maxx; g++) {



				Addname[search - 1] = "";
				count++;


				break;

			}
			cout << "item removed successfully!" << endl;


			Sleep(1000);
			system("CLS");
			break;

		}

		
		else if (answer == 2) {
			system("CLS");
			break;

		}
	}

	if (count == 0) {

		cout << "List is empty!" << endl;
		Sleep(1500);

		system("CLS");

	}

};







void showlist() {

	system("CLS");

	cout << "--------------------------------------------------------------------------------------------------------" << endl;
	cout << " LIST " << endl;



	int count = 0;



	cout << "--------------------------------------------------------------------------------------------------------" << endl;
	cout << "| # |    ID          |       NAME      |            SURNAME          |         BIRTH DATE              |" << endl;
	cout << "--------------------------------------------------------------------------------------------------------" << endl;


	for (int j = 0; j < maxx; j++) {


		if (Addname[j] != "") {
			count++;


			cout << count << ")    " << Idal[j] << mas[j] << "-" << Idal[j] << mas2[j] << "           " << Addname[j] << "               " << Addelastname[j] << "                        " << BirthDate[j] << endl;


		}




		if (count == 0) {

			cout << "List is empty!" << endl;


			Sleep(1200);

			system("CLS");
			break;
		}
	}

};








void update() {
	system("CLS");
	

	cout << "--------------------------------------------------------------------------------------------------------" << endl;
	cout << " LIST " << endl;



	int count = 0;



	cout << "--------------------------------------------------------------------------------------------------------" << endl;
	cout << "| # |    ID          |       NAME      |            SURNAME          |         BIRTH DATE              |" << endl;
	cout << "--------------------------------------------------------------------------------------------------------" << endl;


	for (int j = 0; j < maxx; j++) {


		if (Addname[j] != "") {
			count++;


			cout << count << ")    " << Idal[j] << mas[j] << "-" << Idal[j] << mas2[j] << "           " << Addname[j] << "               " << Addelastname[j] << "                        " << BirthDate[j] << endl;


		}




		if (count == 0) {

			cout << "List is empty!" << endl;


			Sleep(1200);

			system("CLS");
			break;
		}
	}







	for (int k = 0; k < maxx; k++) {

		
		int search;

		string newinfo;
		string newinfo2;
		string newinfo3;

		if (count != 0) {

			cout << "--------------------------------------------------------------------------------------------------------" << endl;
			cout << "please, enter serial number: " << endl;


			cin >> search;

			if ( search - 1 > count) {

				cout << "serial number not found! " << endl;
				Sleep(800);
				break;
			}

		}

		if (count != 0) {

			cout << Addname[search - 1] << endl;



			cout << " Do you want to change this NAME ?" << endl;
			cout << "|1 - YES|       |2 - NO|" << endl;



			int answer;
			cin >> answer;

			if (answer == 1) {
				cout << "Enter NEW NAME: " << endl;
				cin >> newinfo;
				Addname[search - 1] = newinfo;

				cout << "Changes have been saved!" << endl;

				Sleep(800);
				break;

			}


			else if (answer == 2) {

				//break;
				cout << Addelastname[search - 1] << endl;
				cout << " Do you want to change this SURNAME ?" << endl;
				cout << "|1 - YES|       |2 - NO|" << endl;


				int answer2;
				cin >> answer2;

				if (answer2 == 1) {
					cout << "Enter NEW SURNAME: " << endl;
					cin >> newinfo2;
					Addelastname[search - 1] = newinfo2;

					cout << "Changes have been saved!" << endl;

					Sleep(800);
					break;

				}

				else if (answer2 == 2) {
					cout << BirthDate[search - 1] << endl;
					cout << " Do you want to change this BIRTHDATE ?" << endl;
					cout << "|1 - YES|       |2 - NO|" << endl;
					
					int answer3;
					cin >> answer3;

					if (answer3 == 1) {

						cout << "Enter NEW BIRTHDATE: " << endl;
						cin >> newinfo3;
						BirthDate[search - 1] = newinfo3;

						cout << "Changes have been saved!" << endl;

						Sleep(800);
						break;


					}

					if (answer3 == 2) {
						break;
					}


				}


			}



			
		}


	}
};







int main() {

	int option;

	string findId;
	setlocale(LC_ALL, "Russian");

	system("CLS");



	int count = 0;



	do {

		cout << "--------------------------------------------------------------------------------------------------------" << endl;

		cout << " MENU" << endl;
		cout << "--------------------------------------------------------------------------------------------------------" << endl;

		cout << "1 - ADD INFO" << endl;

		cout << "2 - OPEN LIST" << endl;

		cout << "3 - UPDATE INFO" << endl;

		cout << "4 - DELELE INFO" << endl;

		/*cout << "5 - EXIT" << endl;*/



		cout << "--------------------------------------------------------------------------------------------------------" << endl;

		cout << "Choose any option: ";
		cin >> option;
	


		switch (option) {




		case 1: AddInf();
			system("CLS");
			break;

		case 2: showlist();
			//system("CLS");
			break;

		case 3: update();

			system("CLS");
			break;

		case 4:

			Delete();

			break;

		default: 
			cout << "" << endl;

			cout << "OPTION NO FOUND!" << endl;  
			Sleep(550);
			system("CLS");
			break;

		}

	} 
	

};