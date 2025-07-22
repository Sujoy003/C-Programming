#include <stdio.h>
#include <string.h>
// global structure
struct person
{
    char name[1000];
    char adress[1000];
    int age;
    float income;
};

int main()
{
    int n, i;
    printf("Enter the number of person : ");
    scanf("%d", &n);
    struct person s1[n];
    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("The information of 1st person\n ");
        }
        else if (i == 1)
        {
            printf("The information of 2nd person\n");
        }
        else if (i == 2)
        {
            printf("The information of 3rd person\n ");
        }
        else if (i > 2)
        {
            printf("The information of %dth person\n", i + 1);
        }
        getchar();
        printf("Enter the name : ");
        fgets(s1[i].name, sizeof(s1[i].name), stdin);
        s1[i].name[strcspn(s1[i].name, "\n")] = 0;
        printf("Enter the Adress : ");
        fgets(s1[i].adress, sizeof(s1[i].adress), stdin);
        s1[i].adress[strcspn(s1[i].adress, "\n")] = 0;
        printf("Enter the age : ");
        scanf("%d", &s1[i].age);
        printf("Enter the Income : ");
        scanf("%f", &s1[i].income);
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        printf("Name : %s\n", s1[i].name);
        printf("Adress : %s\n", s1[i].adress);
        printf("Age : %d\n", s1[i].age);
        printf("Income : %f\n", s1[i].income);
        printf("\n");
    }

    return 0;
}