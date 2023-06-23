
#include <stdio.h>
 
int main()
{
    int date,month,year;
     
    printf("Enter date (dd mm YYYY format): ");
    scanf("%d %d %d",&date,&month,&year);
     
    if(year>=0000 && year<=9999)
    {
        if(month>=1 && month<=12)
        {
            if(date==31 && month==12)
                printf("01:01:%04d",year+1);
            else if((date>=1 && date<=30) && (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12))
                printf("%02d:%02d:%04d",date+1,month,year);
            else if((date==31) && (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12))
                printf("%02d:%02d:%04d",1,month+1,year);
            else if((date>=1 && date<=29) && (month==4 || month==6 || month==9 || month==11))
                printf("%02d:%02d:%04d",date+1,month,year);
            else if((date==30) && (month==4 || month==6 || month==9 || month==11))
                printf("%02d:%02d:%04d",1,month+1,year);
 else if (month == 2) {
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) { 
    if (date == 29) {
      printf("01:03:%04d", year); 
    } else if (date < 29) {
      printf("%02d:02:%04d", date+1, year); 
    } else {
      printf("Invalid date"); 
    }
  } else { 
    if (date == 28) {
      printf("01:03:%04d", year); 
    } else if (date < 28) {
      printf("%02d:02:%04d", date+1, year);
    } else {
      printf("Invalid date"); 
    }
  }
}

            else
                printf("Date is invalid.");
                return 0;
        }
        else
        {
            printf("Month is not valid.");
            return 0;
        }
    }
    else
    {
        printf("Year is not valid.");
        return 0;
    }
 
    return 0;    
} 