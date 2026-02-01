#include<stdio.h>
#define cycle 6

#ifdef _WIN32
#include <windows.h>
#define clrscr() system("cls")
#define sleep(x) Sleep(x * 1000)
#else
#include <unistd.h>
#define clrscr() printf("\e[1;1H\e[2J")
#endif

int main(){
    int hour,minute,second;
    printf("Enter Hour Minute Second:");
    scanf("%d%d%d",&hour,&minute,&second);

    int h=0,m=0,s=0;

    while(1)
    {
        clrscr();  // Clear Screen

        printf("\t\n\n******** STOP WATCH ********\n\n\n");
        printf("\t%.2d:%.2d:%.2d\n",h,m,s);
        printf("\t\n\n############################\n\n\n");

        if(h==hour && m==minute && s==second){
            break;
        }

        s++;
        sleep(1);

        if(s==cycle){
            m++;
            s=0;
        }

        if(m==cycle){
            h++;
            m=0;
        }
    }

    return 0;
}
