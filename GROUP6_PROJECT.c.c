/*group members//
//1. name : susan kimani reg no: ENE212-0083/2021
//2. name : Ruth Olumo  reg no :ENE212-0092/2021
//3. name : limo Victoria reg no :ENE212-0082/2020
//4 name :Mutwa Farida  reg no ENE212-0174/2021
//5. Richard Abuto reg no : ENE212-0157/2021

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int TotalStudents;
int Units;
typedef struct
{
    char Name;
    char ID_No;
    int Units_taken;
    int Scores[];

}Student;

/*void EnterStudentDetails(int Details[TotalStudents][Units], int TotalStudents)
{
char StudentName;

     scanf("%c",&Details[i][1]);
    for (int j=1; j < Units; j++){
       printf("\nEnter score for unit %d :", j);
       scanf("%d",&Details[i][j]);
    }
}
}
*/
void PrintDetails(Student stdnt){
    printf("Name : %s \n",stdnt.Name);
    printf("ID Number : %d\n",stdnt.ID_No);
    printf("\n\n___Scores___ \n");
    for(int i = 0; i< stdnt.Units_taken ; i++){
        printf("\tUnit %d: %d ", i+1,&stdnt.Scores[i]);

  //      for(int j=0; j<Units; j++){
     //   printf("%d" , Details[i][j]);
       // }
    }
}

void GetDetails(Student stdnt){
    printf("Name : \n");
    scanf("%s", &stdnt.Name);
    printf("ID Number : \n");
    scanf("%s",&stdnt.ID_No);
    printf("\nHow many units does the student take?\n");
    scanf("%d",&stdnt.Units_taken);
    printf("\n\n Enter student scores. \n");
    for(int i = 0; i< stdnt.Units_taken ; i++){
        printf("\tUnit %d: ", i+1);
        scanf("%d",&stdnt.Scores[i]);
    }

}
int main(){
        int TotalStudents = 0;
        //int Units = 0;
        //int Matrix[TotalStudents][Units];
    printf("Enter number of students\n");
    scanf("%d",&TotalStudents);
    /*printf("How nmany units does each student take?");
    scanf("%d", &Units);
    EnterStudentDetails(Matrix[TotalStudents][Units], TotalStudents);
*/
Student *StudentInfoPtr;
StudentInfoPtr = (Student*)malloc(sizeof (Student) * TotalStudents);
for (int i=0; i < TotalStudents; i++){
     printf("Enter details for student %d.\n", i+1);
     GetDetails(*StudentInfoPtr);
/*scanf("%s",&Student1.Name);

for(int i = 0 ; i < Student1.Units_taken ; i++)
{
    printf("Unit %d : ", i+1);
    scanf("%d",&Student1.score);
    printf("\n");
};*/
 PrintDetails(*StudentInfoPtr);

//printf("\n Enter score for unit ");


//printf("Enter student name.\n");

    return 0;
}
}
