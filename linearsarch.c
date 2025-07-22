#include<stdio.h>
int main()
{
int a[7]={20,30,40,50,60,70};
int value;
scanf("%d",&value);
int test = 0;
int index;
for(int i =0;i<=6;i++)
{
    if(a[i]== value)
    {
    index=i+1;
    test=1;
    break;
    }
}
if(test==1)
{
    printf("Your value is found at %d",index);
}
else
{
printf("Not found");
}
    return 0;
}