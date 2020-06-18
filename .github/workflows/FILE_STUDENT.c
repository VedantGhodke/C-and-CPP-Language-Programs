#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fptr ;
    int i, n, rollno, s1, s2 ;
    char name[10] ;
    fptr = fopen("STUDENT.DAT", "w") ;
    printf("Enter the number of students : ") ;
    scanf("%d", &n) ;
    for(i = 0 ; i < n ; i++)
    {
        printf("\nEnter the roll number : ") ;
        scanf("%d", &rollno) ;
        printf("\nEnter the name : ") ;
        scanf("%s", name) ;
        printf("\nEnter the marks in 2 subjects : ") ;
        scanf("%d %d", &s1, &s2) ;
        fprintf(fptr, "%d %s %d %d \n", rollno, name, s1, s2) ;
    }
    fclose(fptr) ;
    fptr = fopen("STUDENT.DAT", "r") ;
    printf("\nRoll No. Name \t\t Sub1 \t Sub2 \t Total\n\n") ;
    for(i = 0 ; i < n ; i++)
    {
        fscanf(fptr,"%d %s %d %d \n", &rollno, name, &s1, &s2) ;
        printf("%d \t %s \t\t %d \t %d \t %d \n", rollno, name,
        s1, s2, s1+s2) ;
    }
    fclose(fptr) ;
}
