#include<stdio.h>
int main(){
    int maths,phy,chem,eng,bio;
    printf("Maths:");
    scanf("%d",&maths);
    printf("Physics:");
    scanf("%d",&phy);
    printf("Chemistry:");
    scanf("%d",&chem);
    printf("English:");
    scanf("%d",&eng);
    printf("Biology:");
    scanf("%d",&bio);
    float avg=(maths+phy+chem+eng+bio)/5;
    float per=((maths+phy+chem+eng+bio)*100)/500;
    printf("The Average Is:%f\n",avg);
    printf("The Percentage Obtained Is:%f",per);
    return 0;
}