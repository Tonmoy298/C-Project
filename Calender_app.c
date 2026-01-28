#include<stdio.h>

int getfirstdayoftheyear(int year){
  int day=(year + (year-1)/4 - (year-1)/100 + (year-1)/400 ) % 7;

  return day;
}

int main(){

    printf("\n !!!......\\\\\\\\\\---------CALENDER---------///////......!!!\n\n\n");

   char *month[]={"January", "February", "March", "April", "May", "June", "July", "August","September"," October", "November", "December"};

   int daysinmonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
   int i,j,totaldays,weekday=0,spacecounter=0,year;
    printf("###Enter Your Favorite Year###:\n");
    scanf("%d",&year);
    printf("\n\n**********-Welcome To %d-**********\n\n",year);

     //Check if it is a leap year
     if((year % 4 ==0&&year % 100 !=0)||(year % 400 ==0)){

        daysinmonth[1]=29;
     }

    //get the first day of the year
    weekday = getfirstdayoftheyear(year);


   for(i=0;i<12;i++)
    {
      printf("\n\n\n\n\n-----------------------------%s-----------------------------\n\n",month[i]);
      printf("\n    Sun   Mon   Tue   Wed   Thu   Fri  Sat\n\n");

      for(spacecounter = 1;spacecounter<=weekday;spacecounter++){
        printf("      ");
      }

      totaldays = daysinmonth[i];
      for(j=1;j<=totaldays;j++)
      {

       printf("%6d",j) ;
       weekday++;
       if(weekday > 6){
          weekday=0;
          printf("\n\n");

       }

      }


    }
  return 0;
}

