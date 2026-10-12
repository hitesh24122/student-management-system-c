#include <stdio.h>
struct student
{
    char name[50];
    int rollno;
    float marks;
};
int main()
{
    struct student n[100], r[100], m[100];
    int count = 0;
    while (1)
    {
        int choice;
        printf("1. Enter Student Details\n2. Display All Students\n3. Find Highest Marks\n4. Find Lowest Marks\n5. Calculate Average Marks\n6. Search Student by Roll No\n7. Exit\n\n");
        printf("enter your choice(1,2,3......)");
        scanf("%d", &choice);
        if (choice == 1)
        {

            printf("enter student name:");
            scanf("%s", &n[count].name);
            printf("enter rollno:");
            scanf("%d", &r[count].rollno);
            printf("enter marks:");
            scanf("%f", &m[count].marks);
            count++;
        }
        else if (choice == 2)
        {
            if (count == 0)
            {
                printf("not data\n\n");
            }
            else
            {

                for (int i = 0; i < count; i++)
                {
                    printf("student name: %s\nrollno : %d\nmarks : %.2f\n\n", n[i].name, r[i].rollno, m[i].marks);
                }
            }
        }
        else if (choice == 3)
        {
            if (count == 0)
            {
                printf("not student data\n\n");
            }
            else
            {

                float high = m[0].marks;
                int b = 0;
                for (int i = 0; i < count; i++)
                {
                    if (m[i].marks > high)
                    {
                        high = m[i].marks;
                        b = i;
                    }
                }
                printf("highest marks student\nname : %s\nrollno : %d\nmarks : %.2f\n\n", n[b].name, r[b].rollno, m[b].marks);
            }
        }
        else if (choice == 4)
        {
            if (count == 0)
            {
                printf("student not data find\n\n");
            }
            else
            {

                float low = m[0].marks;
                int b = 0;
                for (int i = 0; i < count; i++)
                {
                    if (m[i].marks < low)
                    {
                        low = m[i].marks;
                        b = i;
                    }
                }
                printf("lowest marks student\nname : %s\nrollno : %d\nmarks : %.2f\n\n", n[b].name, r[b].rollno, m[b].marks);
            }
        }
        else if (choice == 5)
        {
            if (count == 0)
            {
                printf("student data not find\n\n");
            }
            else
            {

                float sum = 0;
                for (int i = 0; i < count; i++)
                {
                    sum = sum + m[i].marks;
                }
                printf("average of marks : %.2f\n\n", sum / count);
            }
        }
        else if (choice == 6)
        {
            if (count == 0)
            {
                printf("no data\n\n");
            }
            else
            {

                int stu;
                printf("enter rollno you want to search :");
                scanf("%d", &stu);
                int found = 0;
                for (int i = 0; i < count; i++)
                {
                    if (r[i].rollno == stu)
                    {
                        printf("name : %s\nrollno : %d\nmarks : %2.f\n\n", n[i].name, r[i].rollno, m[i].marks);
                        found = 1;
                    }
                }
                if (found == 0)
                {
                    printf("student not in data\n\n");
                }
            }
        }
        else if (choice == 7)
        {
            printf("thank you");
            break;
        }
        else
        {
            printf("operation is wrong");
        }
    }
}