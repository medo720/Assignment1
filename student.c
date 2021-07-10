#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[50];
    int ID;
    int score;
    int year, month, day;
};
struct node
{
    struct student s;
    struct node* next;
};
struct node* head = NULL;
struct node* tail = NULL;
void insert_begin_linked()
{

    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter student name\n");
    fgets(temp->s.name, sizeof(temp->s.name), stdin);
    printf("Enter student ID\n");
    scanf("%d", &temp->s.ID);
    getchar();
    printf("Enter student score\n");
    scanf("%d", &temp->s.score);
    getchar();
    printf("Enter student Date of birth year-month-day\n");
    scanf("%d", &temp->s.year);
    getchar();
    scanf("%d", &temp->s.month);
    getchar();
    scanf("%d", &temp->s.day);
    getchar();

    temp->next = NULL;
    if (head == NULL)
    {
        head = tail = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
}
void insert_end_linked()
{

    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter student name\n");
    fgets(temp->s.name, sizeof(temp->s.name), stdin);
    printf("Enter student ID\n");
    scanf("%d", &temp->s.ID);
    getchar();
    printf("Enter student score\n");
    scanf("%d", &temp->s.score);
    getchar();
    printf("Enter student Date of birth year-month-day\n");
    scanf("%d", &temp->s.year);
    getchar();
    scanf("%d", &temp->s.month);
    getchar();
    scanf("%d", &temp->s.day);
    getchar();
    temp->next = NULL;
    if (head == NULL)
    {
        head = tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}
void insert_middle_linked()
{
    struct node* ptr, * temp;
    int pos;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter the position for the new node to be inserted: ");
    scanf("%d", &pos);
    getchar();
    printf("Enter student name\n");
    fgets(temp->s.name, sizeof(temp->s.name), stdin);
    printf("Enter student ID\n");
    scanf("%d", &temp->s.ID);
    getchar();
    printf("Enter student score\n");
    scanf("%d", &temp->s.score);
    getchar();
    printf("Enter student Date of birth year-month-day\n");
    scanf("%d", &temp->s.year);
    getchar();
    scanf("%d", &temp->s.month);
    getchar();
    scanf("%d", &temp->s.day);
    getchar();
    temp->next = NULL;
    if (pos == 0)
    {
        temp->next = head;
        head = temp;
    }
    else
    {
        ptr = head;
        for (int i = 0; i < pos - 1; i++)
        {
            ptr = ptr->next;
            if (ptr == NULL)
            {
                printf(" not found \n");
                return;
            }
        }
        temp->next = ptr->next;
        ptr->next = temp;
    }
}

void display_linked()
{
    struct node* ptr;
    if (head == NULL)
    {
        printf("nList is empty:n");
        return;
    }
    else
    {
        ptr = head;
        printf("The List elements are: ");
        while (ptr != NULL)
        {
            printf("\nStudent name is: %s", ptr->s.name);
            printf("Student ID is: %d\n", ptr->s.ID);
            printf("Student score is:%d\n", ptr->s.score);
            printf("Student date of birth is:%d-%d-%d\n", ptr->s.day, ptr->s.month, ptr->s.year);
            ptr = ptr->next;
        }
    }
}
struct student* darr;
int n = 0;
void insert_begin_array()
{
    struct student w;
    printf("Enter student name\n");
    fgets(w.name, sizeof(w.name), stdin);
    printf("Enter student ID\n");
    scanf("%d", &w.ID);
    getchar();
    printf("Enter student score\n");
    scanf("%d", &w.score);
    getchar();
    printf("Enter student Date of birth year-month-day\n");
    scanf("%d", &w.year);
    getchar();
    scanf("%d", &w.month);
    getchar();
    scanf("%d", &w.day);
    getchar();
    n++;
    realloc(darr, sizeof(struct student) * (n));
    int i;
    for (i = n - 1; i > 0; i--)
    {
        darr[i] = darr[i - 1];
    }
    darr[i] = w;
}
void insert_end_array()
{
    struct student w;
    printf("Enter student name\n");
    fgets(w.name, sizeof(w.name), stdin);
    printf("Enter student ID\n");
    scanf("%d", &w.ID);
    getchar();
    printf("Enter student score\n");
    scanf("%d", &w.score);
    getchar();
    printf("Enter student Date of birth year-month-day\n");
    scanf("%d", &w.year);
    getchar();
    scanf("%d", &w.month);
    getchar();
    scanf("%d", &w.day);
    getchar();
    n++;
    realloc(darr, sizeof(struct student) * (n));
    darr[n - 1] = w;
}

void display_array()
{
    printf("The List elements are: ");
    for (int i = 0; i < n; i++)
    {
        printf("\nStudent name is: %s", darr[i].name);
        printf("Student ID is: %d\n", darr[i].ID);
        printf("Student score is:%d\n", darr[i].score);
        printf("Student date of birth is:%d-%d-%d\n", darr[i].day, darr[i].month, darr[i].year);
    }

}
void insert_middle_array()
{
    int pos;
    printf("enter the position");
    scanf("%d", &pos);
    getchar();
    struct student w;
    printf("Enter student name\n");
    fgets(w.name, sizeof(w.name), stdin);
    printf("Enter student ID\n");
    scanf("%d", &w.ID);
    getchar();
    printf("Enter student score\n");
    scanf("%d", &w.score);
    getchar();
    printf("Enter student Date of birth year-month-day\n");
    scanf("%d", &w.year);
    getchar();
    scanf("%d", &w.month);
    getchar();
    scanf("%d", &w.day);
    getchar();
    n++;
    realloc(darr, sizeof(struct student) * (n));
    int i;
    for (i = n - 1; i > pos; i--)
    {
        darr[i] = darr[i - 1];
    }
    darr[i] = w;
}


int main()
{
    //struct student s;
    //
    /*printf("%s", s.name);*/
    darr = (struct student*)malloc(1 * sizeof(struct student));

       int c1=0;
       int num =0;
    printf("welcome to our program\n");
    printf("Enter the number of students to insert: ");
    scanf("%d", &num);
    getchar();

    printf("TO use linked list press 1 -  To use dynamic array press 2\n");
        scanf("%d", &c1);
        getchar();

        switch (c1)
        {
        case 1:

            for (int i = 0; i < num; i++)
                insert_end_linked();
            display_linked();
            int c2=0;
            while(1)
            {
                printf("1- insert at beginning\n 2-insert at middle\n 3-insert at end\n");
                scanf("%d",&c2);
                getchar();
                switch (c2)
                {
                case 1:
                    insert_begin_linked();
                    display_linked();
                    break;
                case 2:
                    insert_middle_linked();
                    display_linked();
                    break;
                case 3:
                    insert_end_linked();
                    display_linked();
                    break;
                }


            }
        case 2:
            for (int i = 0; i < num; i++)
                insert_end_array();
            display_array();
            int c3=0;
            while(1)
            {
            printf("1- insert at beginning\n 2-insert at middle\n 3-insert at end\n");
            scanf("%d",&c3);
            getchar();
            switch (c3) {
            case 1:
                insert_begin_array();
                display_array();
                break;
            case 2:
                insert_middle_array();
                display_array();
                break;
            case 3:
                insert_end_array();
                display_array();
                break;
            }

            }
        }

    return 0;
}
