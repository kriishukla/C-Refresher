#include <stdio.h>


int main(){
    
    char str[50];

    printf("Enter text: ");
    gets(str);

        char *krish = &str[0];
    int a=0 ; 
    int e=0 ;
    int i=0 ;
    int o=0 ;
    int u=0 ;
    int total=0;
    int sv;

    while(*krish!='\0'){

        if(*krish!=' '){
            total++;
        }
        if(*krish=='a'){
            a++;
        }
        else if(*krish=='e'){
            e++;
        }
        else if(*krish=='i'){
            i++;
        }
        else if(*krish=='o'){
            o++;
        }
        else if(*krish=='u'){
            u++;
        }
    krish++;
   }
   
   sv = a+e+i+o+u;
   printf("No. of chars:\n");
   printf("a  %d ; e  %d ; i  %d ; o  %d ; u  %d ; rest  %d" , a , e , i , o , u , total-sv);
   printf("\n");
   printf("Percent of total:\n");
   printf("a  %d%% ; e  %d%% ; i  %d%% ; o  %d%% ; u  %d%% ; rest  %d%%" , (a*100)/total , (e*100)/total , (i*100)/total , (o*100)/total , (u*100)/total , (total-sv)*100/total); 

    return 0;
}