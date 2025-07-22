#include <stdio.h>
int main()
{
    int i, n;

    //Finding term and sum

    printf("Enter the number of term  ");
    scanf("%d", &n);
    int num[n];

    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("Enter the 1st number ");
            scanf("%d", &num[i]);
        }
        else if (i == 1)
        {
            printf("Enter the 2nd number ");
            scanf("%d", &num[i]);
        }
        else if (i == 2)
        {
            printf("Enter the 3rd number ");
            scanf("%d", &num[i]);
        }
        else if (i > 2)
        {
            printf("Enter the %dth number ", i + 1);
            scanf("%d", &num[i]);
        }
    }
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + num[i];
    }
    printf("The sum is %d\n", sum);
  
//Maximum and Minimum


    int max = num[0];

    for (i = 0; i < n; i++)
    {
        if (max < num[i])
            max = num[i];
    }
    printf("Maximum = %d\n", max);

    int min = num[0];
    for (i = 0; i < n; i++)
    {
        if (min > num[i])
            min = num[i];
    }
    printf("Minimum = %d\n", min);


//Sarching Value and its position 

    int value, pos = -1;
    printf(" Enter the value you want to sarch : ");
    scanf("%d", &value);
    pos = -1;

    for (i = 0; i < n; i++)
    {
        if (value == num[i])
        {
            pos = i + 1;
            break;
        }
    }
    if (pos == -1)
    {
        printf("The value is not found\n");
    }
    else
    {
        printf("The values position is %d\n", pos);
    }

//Matrix number of rows and coloumns

    int j, numofrows1, numofcolms1;
    int A[10][10];
    printf("Enter the number of rows and coloums");
    scanf("%d %d", &numofrows1, &numofcolms1);
    for (i = 0; i < numofrows1; i++)
    {
        for (j = 0; j < numofcolms1; j++)
        {
            printf("A[%d][ %d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    int B[10][10], numofrows2, numofcolms2;
    printf("Enter the number of rows and coloums");
    scanf("%d %d", &numofrows2, &numofcolms2);
    for (i = 0; i < numofrows2; i++)
    {
        for (j = 0; j < numofcolms2; j++)
        {
            printf("B[%d][ %d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    printf("A = ");
    for (i = 0; i < numofrows1; i++)
    {
        printf("\t");
        for (j = 0; j < numofcolms1; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("B = ");
    for (i = 0; i < numofrows2; i++)
    {
        printf("\t");
        for (j = 0; j < numofcolms2; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int C[i][j];

    for (i = 0; i < numofrows1; i++)
    {
        for (j = 0; j < numofcolms1; j++)
        {
            C[i][j] = A[i][j] + B[i][j]; 
        }
    }
    printf("A + B =\n ");
    for (i = 0; i < numofrows1; i++)
    {
        for (j = 0; j < numofcolms1; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    while (numofcolms1 != numofrows2)
    {
        printf("Error! The number of first in this a coloum is not equal of The number of second row\n");
        printf("Enter the number of A matrix rows and coloums");
        scanf("%d %d", &numofrows1, &numofcolms1);

        printf("Enter the number of B rows and coloums");
        scanf("%d %d", &numofrows2, &numofcolms2);
    }
    int k, result[i][j];
    int sum1 = 0;
    for (i = 0; i < numofrows1; i++)
    {
        for (j = 0; j < numofcolms2; j++)
        {
            for (k = 0; k < numofcolms1; k++)
            {
                sum1 = sum1 + A[i][k] * B[k][j];
            }
            result[i][j] = sum1;
            sum1 = 0;
        }
    }
    printf("Result = \n");
    for (i = 0; i < numofrows1; i++)
    {
        for (j = 0; j <= numofcolms2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    //Transpose 

    int transpose[j][i];
    for (i = 0; i < numofrows1; i++)
    {

        for (j = 0; j < numofcolms1; j++)
        {
            transpose[j][i] = A[i][j];
        }
    }
    for (i = 0; i < numofrows1; i++)
    {
        for (j = 0; j < numofcolms1; j++)
        {
            transpose[j][i] = A[i][j];
        }
    }
    printf("Transpose Matrix of A  = \n");
    for (i = 0; i < numofcolms1; i++)
    {
        for (j = 0; j < numofrows1; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < numofrows2; i++)
    {
        for (j = 0; j < numofcolms2; j++)
        {
            transpose[j][i] = B[i][j];
        }
    }
    printf("Transpose Matrix of B  = \n");
    for (i = 0; i < numofcolms2; i++)
    {
        for (j = 0; j < numofrows2; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    //DiagonaL Matrix

    int sum2 = 0;
    printf("Diagonal elements are = ");
    for (i = 0; i < numofrows1; i++)
    {
        for (j = 0; j < numofcolms1; j++)
        {
            if (i == j)
            {
                printf("%d ", A[i][j]);
                sum2 = sum2 + A[i][j];
            }
        }
    }
    printf("\nSum of diagonal elements of A = %d\n", sum2);
    for (i = 0; i < numofrows1; i++)
    {
        for (j = 0; j < numofcolms1; j++)
        {
            if (i > j)
            {
                printf("%d ", A[i][j]);
                sum2 = sum2 + A[i][j];
            }
        }
    }
    printf("Sum of diagonal elements of A = %d\n", sum2);



    //Lower sum and upper sum

    
    int lowerSum = 0, upperSum = 0;
    for (i = 0; i < numofrows1; i++)
    {
        for (j = 0; j < numofcolms1; j++)
        {
            if (i > j)
            {
                upperSum = upperSum + A[i][j];
            }
            if (i < j)
            {
                lowerSum = lowerSum + A[i][j];
            }
        }
    }
    printf("\n Sum of upper triangle elements of  A = %d\n", upperSum);
    printf("\n Sum of lower triangle elements of  A = %d\n", lowerSum);
    return 0;
}