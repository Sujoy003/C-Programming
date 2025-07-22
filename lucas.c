#include<stdio.h>

void generateLucas( int numterms)
{
int first = 2, second = 1;
  printf("Lucas series up to %d terms: \n", numterms);
  printf("%d  %d ", first , second);


for(int i = 3 ; i<= numterms ; i++)
  {
    int next = first + second ;
    printf("%d ", next);
    first = second;
    second = next;

  }
   printf("\n");

}

int main()
{
  int numterms;
  printf("Enter the number of  tearms in lucas series :  ");
  scanf("%d", &numterms);
  generateLucas(numterms);
  return 0;
}