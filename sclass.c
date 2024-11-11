/*

1-Accept input of student detail of 100 [name, id, score, average]
2- Save it into array
3- update and delete 

- num students
- show menu
add user
update user
show data of one user
show data of all user
delete user
*/

#include <stdio.h>
#include <string.h>

#define MAXNUMSTUDENTS 100
#define MAXNUMOFSUBJECTS 10
int studentID[MAXNUMSTUDENTS];
char studentname[MAXNUMSTUDENTS][50];
float studentMarks[MAXNUMOFSUBJECTS][MAXNUMSTUDENTS];
float studentAvg[MAXNUMSTUDENTS];
int numofStudents;
int studentID;
float studentMark;
float avg;
char name[50];

int addingUsers()
{
    printf("How many users data you want to add: ");
    
    numofStudents = scanf("%d", &numofStudents);

    for(int i=0; i<numofStudents; i++)
    {
        printf("Add the student id");
        scanf("%d", &studentID);
        studentID[i] = studentID;

        printf("Add the name of the student");
        fgets(name, sizeof(name), stdin);
        studentname[i][50] = name;

        printf("Enter the number of subjects:");
        int numOfStubjects;
        scanf("%d", &numOfStubjects);

        for(int i=0; i<numofStudents; i++)
        {
            for(int j=0; i<numOfStubjects; i++)
            {

            }
        }
    }

    
}

void seedata()
{
    printf("")
}

int userChoice()
{
    int userChoice =0;
    printf("Welcome to Our Program");
    printf("Choose 1 for adding");
    printf("Choose 2 for seeing data");
    printf("Choose 3 for show average");
    printf("Choose 5 for exiting");
    scanf("%d", &userChoice);

    return userChoice;
}

int main(void)
{

    
    int userChoices =0;

    do
    {
        userChoices = userChoice();
        switch (userChoices)
        {
        case 1:
            adinguser()
            break;
        
        default:
            break;
        }
    } while (userChoice !=0);
    
    return 0;
}