#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
struct person
{
    char name[35];
    char address[50];
    char mble_no[12];
    char gender[8];
    char mail[100];
    char citision_no[20];
};
void mail();
void menu();
void got();
void start();
void back();
void addrecord();
void listrecord();
void modifyrecord();
void deleterecord();
void delete_all();
void searchrecord();
void ChangeColour();
void welcome();
int main()
{
    system("color 9f");
    welcome();
    start();
    return 0;
}
void back()
{
    start();
}
void start()
{
    menu();
}
void menu()
{
    system("cls");
    printf("\t\t\t\t     -----<><><><>PHONEBOOK<><><><>-----");
    printf("\n\n\t\t\t\t\t\t    MENU\t\t\n\t\t\t\t\t\t   ~~~~~~\n\n\n");
    printf("\t1.Add New Entry\n\n  \t2.Contacts List\n\n   \t3.Modify  \n\n\t4.Search Contacts \n\n\t5.Delete Contacts\n\n\t6.Delete All Contacts\n\n\t7.Change background and font colour\n\n\t8.Exit\n\n Enter any key: ");

    switch(getch())
    {
    case '1':

        addrecord();
        break;
    case '2':
        listrecord();
        break;
    case '3':
        modifyrecord();
        break;
    case '4':
        searchrecord();
        break;
    case '5':
        deleterecord();
        break;
    case '6':
        delete_all();
        break;
    case '7':
        ChangeColour();
    case '8':
        Beep(400,200);
        exit(0);
    default:
        system("cls");
        printf("\nEnter 1 to 8 only");
        printf("\n Enter any key");
        getch();

