/*
	INPUT FORMAT: 
		3 						<- The number of students
		Joe Math990112 89		<- Name IDNumber Grades apiece listed
		Mike CS991301 100
		Mary EE990830 95
	OUTPUT FORMAT:
		Mike CS991301
		Joe Math990112
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

typedef struct StudentInfo							// Define a data structure of student: name, id number and grades
{
	char name[10];
	char idnum[10];
	int grades;
}StudInfo;

void get_info(StudInfo *grades_list, int stud_num); // To get information from input infos
void Sort(StudInfo *grades_list, int len);			// Bubble sort the sequence of the array of Student struct adhering to their grades
void PrintMaxAndMin(StudInfo *grades_list, int end);// To print out the information of the students with the maximum grades and minimum grades
int unused __attribute__((unused));					// Under this code, the compiler using gcc will not display warning info about 'Ignoring return value of scanf'

int main(int argc, char *argv[])
{
	int stud_num;
	StudInfo grades_list[MAX_SIZE];
	
	unused = scanf("%d", &stud_num);							// To get how many numbers of the information of Students are gonna be displayed
	get_info(grades_list, stud_num);
	
	Sort(grades_list, stud_num);
	
	PrintMaxAndMin(grades_list, stud_num);

	return 0;
}

void get_info(StudInfo *grades_list, int stud_num)
{
	int i;
	for (i = 0; i < stud_num; i++)
	{
		unused = scanf("%s%s%d", grades_list[i]->name, grades_list[i]->idnum, &grades_list[i]->grades);
	}
}

void Sort(StudInfo *grades_list, int len)
{
	int i, j;
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len -i -1; j++)
		{
			if ( grades_list[j]->grades < grades_list[j + 1]->grades )
			{
				int temp = grades_list[j]->grades;
				grades_list[j]->grades = grades_list[j + 1]->grades;
				grades_list[j + 1]->grades = temp;
			}
		}
	}
}

void PrintMaxAndMin(StudInfo *grades_list, int end)
{
	printf("%s %s\n", grades_list[0]->name, grades_list[0]->idnum);
	printf("%s %s", grades_list[end]->name, grades_list[end]->idnum);
}
