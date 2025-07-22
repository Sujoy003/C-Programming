
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[30];
    printf("**Enter first line of full string **  : ");
    // THIS IS PROPER FORMAT OF FGETS
    fgets(s1, sizeof(s1), stdin); 
    // for cut new line
    s1[strcspn(s1, "\n")] = 0;

    printf("First name : %s\n", s1);
   
    // FOR SELECT LENGTH
    int i =0;
    int len = strlen(s1);
    for (i = 0; i < len; i++)
    {
        printf("S-%d: %c\n", i + 1, s1[i]);
    }
    int len1 = strlen(s1);
    // FOR VARIOUS COUNT OF S1
    int vowel, consonent, word, digit, capital, small, other;
    vowel = consonent = word = digit = capital = small = other = 0;
    for (i = 0; i < strlen(s1); i++)
    {
        if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u' || s1[i] == 'A' || s1[i] == 'E' || s1[i] == 'I' || s1[i] == 'O' || s1[i] == 'U')
            vowel++;
        else if ((s1[i] >= 'a' && s1[i] <= 'z') || (s1[i] >= 'A' && s1[i] <= 'Z'))
            consonent++;
        else if (s1[i] == ' ')
            word++;

        else if (s1[i] >= '0' && s1[i] <= '9')
            digit++;
        else
            other++;
        if (s1[i] >= 65 && s1[i] <= 90)
            capital++;
        if (s1[i] >= 97 && s1[i] <= 122)
            small++;
    }
    printf("1.Number of Vowel = %d\n", vowel);
    printf("2.Number of consonent = %d\n", consonent);
    printf("3.Number of  word = %d\n", word);
    printf("4.Number of  capital = %d\n", capital);
    printf("5.Number of  small = %d\n", small);
    printf("6.Number of digit = %d\n", digit);
    printf("7.Number of other = %d\n", other);

    // FOR UPPER AND LOWER CASE OF S1
    strupr(s1);
    printf("8.In upper case = %s\n", s1);
    strlwr(s1);
    printf("9.In lower case = %s\n", s1);

    // FOR COUNT LENGTH int len= 0;while(s1[i]='\n');{ i++;len++;}
    printf("10.Length= %d\n", len);

    char copy[30];
    // FOR COPY
    strcpy(copy, s1);
    printf("11.Copy = %s\n", copy);

    printf("\n");

    // Starting second
    char s2[30];
    printf("**Enter second line of full string **  : ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = 0;

    // FOR VARIOUS COUNT OF S2
    int len2 = strlen(s2);
    int vowel1, consonent1, word1, digit1, capital1, small1, other1;
    vowel1 = consonent1 = word1 = digit1 = capital1 = small1 = other1 = 0;
    for (i = 0; i < len2; i++)
    {
        if (s2[i] == 'a' || s2[i] == 'e' || s2[i] == 'i' || s2[i] == 'o' || s2[i] == 'u' || s2[i] == 'A' || s2[i] == 'E' || s2[i] == 'I' || s2[i] == 'O' || s2[i] == 'U')
            vowel1++;
        else if ((s2[i] >= 'a' && s2[i] <= 'z') || (s2[i] >= 'A' && s2[i] <= 'Z'))
            consonent1++;
        else if (s2[i] == ' ')
            word1++;

        else if (s2[i] >= '0' && s2[i] <= '9')
            digit1++;
        else
            other1++;
        if (s2[i] >= 65 && s2[i] <= 90)
            capital1++;
        if (s2[i] >= 97 && s2[i] <= 127)
            small1++;
    }
    printf("1.Number of Vowel = %d\n", vowel1);
    printf("2.Number of consonent = %d\n", consonent1);
    printf("3.Number of  word = %d\n", word1);
    printf("4.Number of  capital = %d\n", capital1);
    printf("5.Number of  small = %d\n", small1);
    printf("6.Number of digit = %d\n", digit1);
    printf("7.Number of other = %d\n", other1);

    // FOR UPPER AND LOWER CASE OF S2
    strupr(s2);
    printf("8.In upper case = %s\n", s2);
    strlwr(s2);
    printf("9.n lower case = %s\n", s2);

    // FOR COUNT LENGTH int len= 0;while(s2[i]='\n');{ i++;len++;}
    printf("10.Length= %d\n", len);

    // FOR COPY
    strcpy(copy, s2);
    printf("11.Copy = %s\n", copy);

    // CACULATE STRING ARE EQUAL OR NOT
    int d = strcmp(s1, s2);
    if (d == 0)
    {
        printf("\n");
        printf(">>>Strings are equal\n");
    }
    else
    {
        printf("\n");
        printf(">>>Strings are not equal\n");
        printf("\n");
    }
    // if (d == 0){printf("\nstrings are palindrom \n"); }else{printf("\nstrings are not palindrom\n"); }

    // FOR SWAP
    char temp[100];
    strcpy(temp, s1);
    strcpy(s1, s2);
    strcpy(s2, temp);
    printf(">>>First swap string  : %s\n", s1);
    printf("\n");
    printf(">>>Second swap string  : %s\n", temp);

    // FOR REVERSE of s1
    // WITHOUT STREV  //int j, len= 0 ,i=0;while(s1[i]!='\0');{ i++;len++;} for (j = 0; i = len-1; i--; j++){s2[j]=s1[i]} s2[j]='\n';

    strrev(s2);
    printf("\n");
    printf(">>>The reverse string for S1 = %s \n", s2);
    // FOR REVERSE of s2
    // WITHOUT STREV  //int j, len= 0 ,i=0;while(s2[i]!='\0');{ i++;len++;} for (j = 0; i = len-1; i--; j++){s2[j]=s1[i]} s2[j]='\n';

    strrev(s1);
    printf("\n");
    printf(">>>The reverse string for S2 = %s \n", s1);

    // FOR CONCAT A STRING THAT MEAN ADDING A NEW STRING
    // WITHOUT STRCAT  //int len= 0 j=0;while(s1[i]!='\0');{ i++;len++;} while(s2[j]!='\0');{ s1[len +j]=s2[j]; j++;};
    char s[10] = " ";
    strcat(s1, s);
    strcat(s1, s2);
    printf("\n");
    printf(">>>The  reverse concated line = %s\n", s1);

    return 0;
}