//Accept distance in kilometer & convert it into meter (1 km = 1000 m)

#include<stdio.h>

int DisMeter(int d)
{
    int disM=0;
    disM=d*1000;
    return disM;
}

int main()
{
    int dis=0;
    int ret=0;
    printf("Enter Distance in Kilometer : ");
    scanf("%d",&dis);

    ret=DisMeter(dis);
    printf("------------------------------------");
    printf("\n %d KiloMeter =  %d Meter",dis,ret);
    printf("\n-------------------------------------");
    
    return 0;
}