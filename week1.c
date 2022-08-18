#include <stdio.h>
#include<stdlib.h>
int main()
{
    printf("Enter the input string : ");
    char ip , string[25];
    scanf("%s",string);
    int i=0,state=0;
    while(string[i]!='\0')
    {
        ip=string[i];
        switch(state)
        {
            case 0:if(ip=='a')
                   {
                       state=1;
                       
                   }
                   else if(ip=='b')
                   {
                       state=3;
                       
                   }
                   else
                   {
                        printf("invalid token");
                        exit(0);
                   }
                   break;
            case 1:if(ip=='a')
                   {
                       state=2;
                       
                   }
                   else if(ip=='b')
                   {
                       state=3;
                       
                   }
                   else
                   {
                        printf("invalid token");
                        exit(0);
                   }
                   break;
            case 2:if(ip=='a')
                   {
                       state=2;
                       
                   }
                   else if(ip=='b')
                   {
                       state=3;
                       
                   }
                   else
                   {
                        printf("invalid token");
                        exit(0);
                   }
                   break;
            case 3:if(ip=='a')
                   {
                       state=1;
                       
                   }
                   else if(ip=='b')
                   {
                       state=4;
                       
                   }
                   else
                   {
                        printf("invalid token");
                        exit(0);
                   }
                   break;
            case 4:if(ip=='a')
                   {
                       state=1;
                       
                   }
                   else if(ip=='b')
                   {
                       state=4;
                       
                   }
                   else
                   {
                        printf("invalid token");
                        exit(0);
                   }
                   break;
        }
        i++;
        
    }
    
    
    if(state==2||state==4)
    {
        printf("Accepted");
    }
    else
    {
        printf("Not accepted");
    }

    return 0;
}
