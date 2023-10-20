#include<stdio.h>
struct date{
    int day,month,year;
};



int main()
{
    struct date d;
    printf("Enter the Day:");
    scanf("%d",&d.day);
    printf("Enter the Month:");
    scanf("%d",&d.month);
    printf("Enter the Year:");
    scanf("%d",&d.year);
    int da=d.day;
    int mo=d.month;
    int ye=d.year;
    char arr[13][10]={"null","January","Feburary","March","April","May","June","July","August","September","October","November","December"};
    int add,ad;
    printf("Enter The Function To Be Executed:");
     char c;
    scanf("%s",&c);
    switch(c){
    case 'a':
    {
       da++;
       if(da>30)
       {
         mo++;
         da=da-30;
         if(mo>12)
         {
            ye++;
            mo=1;
         }
       }
       printf("The Next Date Is: %d/%d/%d",da,mo,ye);
       printf("\nMonth: %s",arr[mo]);
    }
    break;
    case 'b' :
    {
     mo++;
     if(mo>12)
     {
        ye++;
        mo=1;
     }
     printf("The Next Month Is: %d/%d/%d",da,mo,ye);
     printf("\nMonth: %s",arr[mo]);
    }
    break;
    case 'c' :
    {
           ye++;
           printf("The Next Year Is: %d/%d/%d",da,mo,ye);
 
    }
    break;
    case 'd' :
    {
     
     printf("Enter The month to be added: ");
     scanf("%d",&add);
     mo=mo+add;
      if(mo>12)
      {
        mo=mo-12;
        ye++;
      }
       printf("Output: %d/%d/%d",da,mo,ye);

    }
    break;
    case 'e':
    {
        printf("Enter The Years To be Added: ");
        scanf("%d",&add);
        ye=ye+add;
        printf("Output: %d/%d/%d",da,mo,ye);
    }
    break;
    case 'f' :
    {
        printf("The Month Of Taken Date Is: %s",arr[mo]);

    
    }
    break;
    case 'g' :
    {
    printf("OUTPUT:  %d-%d-%d",da,mo,ye );
    printf("\nOUTPUT:  %d.%d.%d",da,mo,ye );


    }
break;
    default :
    {
        printf("Wrong Info.");

    }

   }
   return 0;
}