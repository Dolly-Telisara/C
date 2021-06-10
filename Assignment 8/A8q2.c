//Accept a single digit from user & print it into word

#include<stdio.h>

void DisplayWord(int no)
{
    if(no<0)
    {
        no = -no;
    }
    switch(no)
    {
        case 0:
            printf("ZERO");
            break;
        case 1:
            printf("ONE");
            break;
        case 2:
            printf("TWO");
            break;
        case 3:
            printf("THREE");
            break;
        case 4:
            printf("FOUR");
            break;
        case 5:
            printf("FIVE");
            break;
        case 6:
            printf("SIX");
            break;
        case 7:
            printf("SEVEN");
            break;
        case 8:
            printf("EIGHT");
            break;
        case 9:
            printf("NINE");
            break;
        default:
            printf("INVALID INPUT!!!");
    }
}

int main()
{
    int value=0;
    printf("Enter a single digit number : ");
    scanf("%d",&value);

    printf("--------------------");
    printf("\n\t");
    DisplayWord(value);
    printf("\n--------------------");
    return 0;
}