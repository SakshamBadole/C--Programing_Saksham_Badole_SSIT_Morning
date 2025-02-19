#include <stdio.h>
#include <string.h>
#include <conio.h>

#define maxuser 5

struct User
{
    int id;
    char name[50];
    char phone[10];
};

struct User users[maxuser];
int userCount = 0;

void adduser()
{
    if (userCount >= maxuser)
    {
        printf("user limit reached\n");
        return;
    }
    else
    {
        printf("\n Add User data\n");
        printf("Enter id:-");
        scanf("%d", &users[userCount].id);
        printf("Enter name:-");
        scanf("%s", users[userCount].name);
        printf("Enter phone:-");
        scanf("%s", users[userCount].phone);
        userCount++;
    }

    printf("user added successfully\n");
};

void deleteuser()
{
    int id;
    printf("enter id:-");
    scanf("%d", &id);

    for (int i = 0; i < userCount; i++)
    {
        if (users[i].id == id)
        {
            for (int j = i; j < userCount - 1; j++)
            {
                users[j] = users[j + 1];
            }
            userCount--;
        }
    }
    printf("user deleted successfully\n");
};
void updateuser()
{
    int id;
    printf("enter id:-");
    scanf("%d", &id);
    for (int i = 0; i < userCount; i++)
    {
        if (users[i].id == id)
        {
            printf("Enter new name:-");
            scanf("%s", users[i].name);
            printf("Enter new phone:-");
            scanf("%s", users[i].phone);
            printf("user updated successfully\n");
        }
    }
    printf("user not found\n");
};
void displayuser()
{
    if (userCount == 0)
    {
        printf("No user available\n");
        return;
    }

    for (int i = 0; i < userCount; i++)
    {
        printf("id:%d\n", users[i].id);
        printf("user name:%s\n", users[i].name);
        printf("phone:%s\n", users[i].phone);
    }
};

int main()
{
    char correctname[50] = "ram";
    char correctpass[20] = "XYZ";
    char username[50], password[40];
    int attemp = 3;

    printf("LOGIN\n");

    while (attemp > 0)
    {
        printf("Enter your username:-");
        scanf("%s", username);
        printf("Enter password:-");
        int i = 0;
        char ch;
        while ((ch = _getch()) != 13) 
        {
            password[i] = ch;
            i++;
            printf("*");
        }
        password[i] = '\0'; 

        if (strcmp(correctname, username) == 0 && strcmp(correctpass, password) == 0)
        {
            printf("\nLogin successful.\n");

            while (1)
            {
                int choice;
                printf("\nchoice one of the following:- 1.Add user. 2.Delete user 3.update user. 4.display user 5.exit\n");
                printf("Enter your choice:-");
                scanf("%d", &choice);

                switch (choice)
                {
                case 1:
                    adduser();
                    break;
                case 2:
                    deleteuser();
                    break;
                case 3:
                    updateuser();
                    break;
                case 4:
                    displayuser();
                    break;
                case 5:
                    return 0;
                default:
                    printf("Invalid choice!\n");
                }
            }
        }

        else
        {
            attemp--;
            printf("\nInvalid username or password! you have %d attemp left\n", attemp);
        }
    }
    printf("Too many attemp. try again later!!!\n");
}