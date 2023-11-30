#include<iostream>
#include<fstream>
#include<iomanip>
#include<windows.h>
using namespace std; 
void menu();//main menu function prototype
class ManageMenu
{ 
protected:
 string userName; //hide admin name
public:
 //virtual void menu(){}
 ManageMenu()
 { 
 system("color 0A"); //change terminal color
 cout << "\n\n\n\n\n\n\n\n\n\t Enter Your Name to Continue as an Admin: "; 
 cin >> userName;
 system("CLS");
 menu(); //call to main function to load after executing the constructr
 } 
 ~ManageMenu(){} //de
};
class Candidate
{ 
public:
 string name, gender, address;
 int age, mobileNo, menuBack;
 static int cusID; 
 char all[999];
 void getDetails()
 { 
 ofstream out("old-customers.txt", ios::app); //open file using append mode to write customer details
 { 
 cout << "\nEnter Candidate ID: "; 
 cin >> cusID; 
 cout << "Enter Name: "; 
 cin >> name; 
 cout << "Enter Age: ";
 cin >> age;
 cout << "Enter Mobile Number: "; 
 cin >> mobileNo; 
 cout << "Address: "; 
 cin >> address; 
 cout << "Gender: "; 
 cin >> gender; 
 } 
 out << "\nCustomer ID: " << cusID << "\nName: " << name << "\nAge: " << age << 
"\nMobile Number: " << mobileNo << "\nAddress: " << address << "\nGender: " << gender << 
endl;
 out.close();
 cout << "\nSaved \nNOTE: We save your details record for future purposes.\n" << 
endl;
 } 
 void showDetails() //function to show old customer records
 { 
 ifstream in("old-customers.txt");
 { 
 if(!in) 
 { 
 cout << "File Error!" << endl; 
 } 
 while(!(in.eof())) 
 { 
 in.getline(all, 999);
 cout << all << endl;
 } 
 in.close();
 } 
 } 
};
int Candidate::cusID; 
class JobType
{ 
public:
 int jobChoice;
 float growth; 
 static float lastGrowth;
 void jobDetails()
 { 
 cout << "We collaborated with fastest, safest, and smartest recruitment service around the country" << endl; 
 cout << "-----------YSM jobs-----------\n" << endl;
 cout << "1. Work from home " << endl;
 cout << "2. Onsite work" << endl; 
 cout << "\nEnter another key to back or," << endl;
 cout << "\nTo calculate the growth of your journey.." << endl;
 cout << "Enter which kind of job you need: "; 
 cin >> jobChoice; 
 int hireJob; 
 if(jobChoice == 1){
 growth = 10.0; 
 cout << "\nYour growth percentage will be " << growth << " %" << endl;
 cout << "Press 1 to select this type of job: "; 
 cout << "Press 2 to select another type of job: "; 
 cin >> hireJob; 
 system("CLS");
 if (hireJob == 1){
 lastGrowth = growth;
 cout << "\nYou have successfully selected work from home" << endl;
 cout << "Goto Menu to take the confirmation" << endl;
 } 
 else if(hireJob == 2){
 jobDetails(); 
 } 
 else{ 
 cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << 
endl;
 Sleep(1100);
 system("CLS");
 jobDetails(); 
 } 
 } 
 else if(jobChoice == 2){
 growth = 12.50; 
 cout << "\nYour growth will be " << growth << " %" << endl;
 cout << "\n The cities to work in will be: "<<endl; 
 cout << "\n 1. Bangalore"<< "\n 2. Chennai"<< "\n 3. Mumbai" << "\n 4. Pune"
<< "\n 5. Hyderabad"<< endl; 
 cout << "Press 1 to select this job type: or "; 
 cout << "Press 2 to select another type: "; 
 cin >> hireJob; 
 system("CLS");
 if (hireJob == 1){
 lastGrowth = growth;
 cout << "\nYou have successfully selected O site work" << endl; 
 cout << "Goto Menu to take the confirmation" << endl;
 } 
 else if(hireJob == 2){
 jobDetails(); 
 } 
 else{ 
 cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << 
endl;
 Sleep(1100);
 system("CLS");
 jobDetails(); 
 } 
 } 
 else{ 
 cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl; 
 Sleep(1100);
 system("CLS");
 menu();
 } 
 cout << "\nPress 1 to Redirect Main Menu: "; 
 cin >> hireJob;
 system("CLS");
 if(hireJob == 1){
 menu();
 } 
 else{ 
 menu();
 } 
 } 
};
float JobType::lastGrowth; 
class CompanyList
{ 
public:
 int choiceCompany;int choiceComp; 
 int postChoice1;
 int gotoMenu;
 static float growthP;
 void company()
 { 
 string compNo[] = {"Product based company", "Service based company"};
for(int a = 0; a < 2; a++)
 { 
 cout << (a+1) << compNo[a] << endl; 
 } 
 cin >> choiceComp; 
 if(choiceComp==1){
 cout << "\nCurrently we collaborated with above companies!" << endl; 
 cout << "\n 1. Adobe" << "\n 2. microsoft" << " \n 3. google"<< endl; 
 cout << "Press any key to back or\nEnter Number of the company you want to book or see details: "; 
 cin >> choiceCompany;
 system("CLS");
 if(choiceCompany == 1){
 cout << "-------WELCOME TO Adobe-------\n" << endl; 
 cout << "We welcome you in our company. We wish you all the best in your career" << endl;
 cout << "Packages/posts/jobs offered by Adobe:\n" << endl;
 cout << "1. Junior" << endl; 
 cout << "\nDeveloper" << endl; 
 cout << "2. Assistant" << endl;
 cout << "\nManager" << endl; 
 cout << "3. HR" << endl;
 cout << "\nPress another key to back or\nEnter Package number you want to book: "; 
 cin >> postChoice1; 
 if (postChoice1 == 1){
 growthP = 5.00;//growth
 cout << "\nYou have successfully registered" << endl;
 cout << "Goto Menu and take the form" << endl; 
 } 
 else if (postChoice1 == 2){
 growthP = 10.00; 
 cout << "\nYou have successfully registered" << endl;
 cout << "Goto Menu and take the form" << endl; 
 } 
 else if (postChoice1 == 3){
 growthP = 1.50; 
 cout << "\nYou have successfully registered" << endl;
 cout << "Goto Menu to take the form" << endl;
 } 
 else{ 
 cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << 
endl;
 Sleep(1100);
 system("CLS");
 company();
 } 
 cout << "\nPress 1 to Redirect Main Menu: "; 
 cin >> gotoMenu;
 system("CLS");
 if(gotoMenu == 1){
 menu();
 } 
 else{ 
 menu();
 } 
 } 
 else if(choiceCompany == 2){
 cout << "-------WELCOME TO Microsoft-------\n" << endl; 
 cout << " Welcome to microsoft world. We welcome you and wish you the very best for your future" << endl; 
 cout << "Packages Offered by microsoft:\n" << endl; 
 cout << "1. Junior" << endl; 
 cout << "\t Developer" << endl;//growth % value
 cout << "2. Assistant"<< endl; 
 cout << "\t Manager" << endl; 
 cout << "3. HR" << endl;
 cout << "\nPress another key to back or\nEnter Package number you want to register: "; 
 cin >> postChoice1; 
 if (postChoice1 == 1){
 growthP = 15.00; 
 cout << "You have successfully registered " << endl;//post name
 cout << "Goto Menu and take the form" << endl; 
 } 
 else if (postChoice1 == 2){
 growthP = 10.00; 
 cout << "You have successfully registered" << endl; 
 cout << "Goto Menu and take the form" << endl;
 } 
 else if (postChoice1 == 3){
 growthP = 5.00; 
 cout << "You have successfully registered" << endl; 
 cout << "Goto Menu and take the form" << endl; 
 } 
 else{ 
 cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << 
endl;
 Sleep(1100);
 system("CLS");
 company();
 } 
 cout << "\nPress 1 to Redirect Main Menu: "; 
 cin >> gotoMenu; 
 system("CLS");
 if(gotoMenu == 1){
 menu();
 } 
 else{ 
 menu();
 } 
 } 
 else if(choiceCompany == 3){
 cout << "-------WELCOME TO Google-------\n" << endl; 
 cout << "Welcome to google group. We wish you all the best for your future ambitions" << endl; 
 cout << "1. Junior" << endl; 
 cout << "\t Developer" << endl;//growth % value
 cout << "\nPress another key to back or\n Enter the pacakge number 1 to register: "; 
 cin >> postChoice1; 
 if (postChoice1 == 1){
 growthP = 5.00; 
 cout << "You have successfully registered" << endl; 
 cout << "Goto Menu and take the form" << endl; 
 } 
 else{ 
 cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
 Sleep(1100);
 system("CLS");
 company();
 } 
 cout << "\nPress 1 to Redirect Main Menu: ";
 cin >> gotoMenu;
 system("CLS");
 if(gotoMenu == 1){
 menu();
 } 
 else{ 
 menu();
 } 
 } 
 else{ 
 cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl; 
 Sleep(1100);
 system("CLS");
 menu();
 } 
 } 
 else if (choiceComp==2){
 cout << "\nCurrently we collaborated with above !" << endl; 
 cout << "\n 1. TCS" << "\n 2. Wipro" << " \n 3. Infosys"<< endl; 
 cout << "Press any key to back or\nEnter Number of the hotel you want to book or see details: "; 
 cin >> choiceCompany;
 system("CLS");
 if(choiceCompany == 1){
 cout << "-------WELCOME TO TCS-------\n" << endl; 
 cout << "We welcome you to the TCS family and wish you all the luck four future" << endl;
 cout << "Packages offered by TCS:\n" << endl;
 cout << "1. Junior" << endl; 
 cout << "\t Developer" << endl;//growth % value
 cout << "2. Assistant"<< endl; 
 cout << "\t Manager" << endl; 
 cout << "3. HR" << endl;
 cout << "\nPress another key to back or\nEnter Package number you want to register: "; 
 cin >> postChoice1; 
 if (postChoice1 == 1){
 growthP = 5.00; 
 cout << "\nYou have successfully registered" << endl;
 cout << "Goto Menu and take the form" << endl; 
 } 
 else if (postChoice1 == 2){
 growthP = 10.00; 
 cout << "\nYou have successfully registered" << endl;
 cout << "Goto Menu and take the form" << endl; 
 } 
 else if (postChoice1 == 3){
 growthP = 15.00; 
 cout << "\nYou have successfully registered" << endl;
 cout << "Goto Menu to take the form" << endl; 
 } 
 else{ 
 cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << 
endl;
 Sleep(1100);
 system("CLS");
 company();
 } 
 cout << "\nPress 1 to Redirect Main Menu: "; 
 cin >> gotoMenu; 
 system("CLS");
 if(gotoMenu == 1){
 menu();
 } 
 else{ 
 menu();
 } 
 } 
 else if(choiceCompany == 2){
 cout << "-------WELCOME TO wipro-------\n" << endl; 
 cout << "Welcome to Wipro. We are delighted to see you here." << endl;
 cout << "Packages Offered by Wipro:\n" << endl;
 cout << "1. Junior" << endl; 
 cout << "\t Developer" << endl;//growth % value
 cout << "2. Assistant"<< endl; 
 cout << "\t Manager" << endl; 
 cout << "3. HR" << endl;
 cout << "\nPress another key to back or\nEnter Package number you want to book: "; 
 cin >> postChoice1;
 if (postChoice1 == 1){
 growthP = 15.00; 
 cout << "You have successfully registered" << endl; 
 cout << "Goto Menu and take the form" << endl; 
 } 
 else if (postChoice1 == 2){
 growthP = 10.00; 
 cout << "You have successfully bo" << endl;
 cout << "Goto Menu and take the receipt" << endl; 
 } 
 else if (postChoice1 == 3){
 growthP = 5.00; 
 cout << "You have successfully registered" << endl; 
 cout << "Goto Menu and take the form" << endl; 
 } 
 else{ 
 cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << 
endl;
 Sleep(1100);
 system("CLS");
 company();
 } 
 cout << "\nPress 1 to Redirect Main Menu: "; 
 cin >> gotoMenu; 
 system("CLS");
 if(gotoMenu == 1){
 menu();
 } 
 else{ 
 menu();
 } 
 } 
 else if(choiceCompany == 3){
 cout << "-------WELCOME TO Infosys-------\n" << endl; 
 cout << "We welcome you on behalf of whole Infosys family" << endl;
 cout << "1. Junior" << endl; 
 cout << "\t Developer" << endl;//growth % value
 ; 
 cout << "\nPress another key to back or\nPress 1 to register: "; 
 cin >> postChoice1; 
 if (postChoice1 == 1){
 growthP = 5.00; 
 cout << "You have successfully booked" << endl;
 cout << "Goto Menu and take the receipt" << endl; 
 } 
 else{ 
 cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << 
endl;
 Sleep(1100);
 system("CLS");
 company();
 } 
 cout << "\nPress 1 to Redirect Main Menu: "; 
 cin >> gotoMenu; 
 system("CLS");
 if(gotoMenu == 1){
 menu();
 } 
 else{ 
 menu();
 } 
 } 
 else{ 
 cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl; 
 Sleep(1100);
 system("CLS");
 menu();
 } 
 } 
}};
float CompanyList::growthP;
class Progress : public CompanyList, JobType, Candidate //Multiple Inheritance of some other classes to Chargers
{ 
public:
 void printBill()
 { 
 ofstream outf("receipt.txt"); //receipt for bought items
 { 
 outf << "--------YRM job portal--------" << endl; 
 outf << "-------------Receipt-------------" << endl; 
 outf << "___________" << endl; 
 outf << "Candidate ID: " << Candidate::cusID << endl << endl;
 outf << "Description\t\t Total" << endl;
 outf << "company growth:\t\t " << fixed << setprecision(2) << CompanyList::growthP << 
endl;
 outf << "job type growth:\t\t " << fixed << setprecision(2) << 
JobType::lastGrowth << endl;
 outf << "___________" << endl; 
 outf << "Total Growth:\t\t " << fixed << setprecision(2) << 
CompanyList::growthP+JobType::lastGrowth << endl;
 outf << "___________" << endl; 
 outf << "------------THANK YOU------------" << endl; 
 } 
 outf.close();
 //cout << "Your receipt printed, please get it from the file saved path:D" << endl;
 } 
 void showBill()
 { 
 ifstream inf("receipt.txt");
 { 
 if(!inf) 
 { 
 cout << "File Error!" << endl; 
 } 
 while(!(inf.eof()))
 { 
 inf.getline(all, 999);
 cout << all << endl;
 } 
 } 
 inf.close();
 } 
};
void menu() //menu function contain main menu
{ 
 int mainChoice;
 int inChoice;
 int gotoMenu;
 cout << "\t\t * YRM jobs *\n" << endl; 
 cout << "-------------------------Main Menu--------------------------" << endl; 
 cout << "\t _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl; 
 cout << "\t|\t\t\t\t\t|" << endl;
 //cout << "\t|\tAgency System Management -> 0" << endl;
 cout << "\t|\tUser Management ->1\t|" << endl;
 cout << "\t|\tType of Job -> 2\t|" << endl;
 cout << "\t|\tRecruitment Management -> 3\t|" << endl;
 cout << "\t|\tgrowth -> 4\t|" << endl;
 cout << "\t|\tExit -> 5\t|" << endl;
 cout << "\t|\t\t\t\t\t|" << endl;
 cout << "\t|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|" << endl; 
 cout << "\nEnter Choice: "; 
 cin >> mainChoice;
 system("CLS");
 Candidate a2; //creating objects
 JobType a3;
 CompanyList a4;
 Progress a5;
 /*if(mainChoice == 0){
 }*/
 if(mainChoice == 1){
 cout << "------Candidates------\n" << endl; 
 cout << "1. Enter New Candidate"<< endl; 
 cout << "2. See Old Candidates"<< endl; 
 cout << "\nEnter choice: "; 
 cin >> inChoice;
 system("CLS");
 if(inChoice == 1){
 a2.getDetails(); 
 } 
 else if(inChoice == 2){
 a2.showDetails(); 
 } 
 else{ 
 cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl; 
 Sleep(1100);
 system("CLS");
 menu();
 } 
 cout << "Press 1 to Redirect Main Menu: "; 
 cin >> gotoMenu;
 system("CLS");
 if(gotoMenu == 1){
 menu();
 }
 else{ 
 menu();
 } 
 } 
 else if(mainChoice == 2){
 a3.jobDetails();
 } 
 else if(mainChoice == 3){
 cout << "--> select a company using the System <--\n" << endl;
 a4.company();
 } 
 else if(mainChoice == 4){
 cout << "-->Get your form<--\n" << endl; 
 a5.printBill();
 cout << "Your form is already printed you can get it from file path\n" << endl; 
 cout << "to display the your form in the screen, Enter 1: or Enter another key to back main menu: "; 
 cin >> gotoMenu;
 if(gotoMenu == 1){
 system("CLS");
 a5.showBill();
 cout << "Press 1 to Redirect Main Menu: "; 
 cin >> gotoMenu; 
 system("CLS");
 if(gotoMenu == 1){
 menu();
 } 
 else{ 
 menu();
 } 
 } 
 else{ 
 system("CLS");
 menu();
 } 
 } 
 else if(mainChoice == 5){
 cout << "\n\n\t--GOOD-BYE!--" << endl; 
 Sleep(1100);
 system("CLS");
 ManageMenu();
 } 
 else{ 
 cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl; 
 Sleep(1100);
 system("CLS");
 menu();
 } 
} 
int main()
{ 
 ManageMenu startObj;
 return 0; 
}
