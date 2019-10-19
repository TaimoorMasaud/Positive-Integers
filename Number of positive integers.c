//Name: Taimoor Masaud
#include<stdio.h>
int main()

{
    int x,y,z,integers=0;
    printf("\nInput the first number x:");
    scanf("%d",&x);
    printf("\nInput the second number y:");
    scanf("%d",&y);
    printf("\nInput the third number z:");
    scanf("%d",&z);
    if(x>=0)
    {
        integers=integers+1;
    }
    if(y>=0)
    {
        integers=integers+1;
    }
    if(z>=0)
    {
        integers=integers+1;
    }
    printf("The number of positive integers are: %d",integers);

}
