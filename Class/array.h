#include<iostream>
#include<math.h>
#include<stdbool.h>
using namespace std;
void enter()
{
    int f;
   cout<<"Enter The Index Of Array";
   cin>>f;
   int a[f];
   cout<<"Enter The Elemnts:";
   for(int i=0;i<f;i++)
   {
    cin>>a[i];
   } 
   bool flag=false;
   for(int i=1;i<=f;i++)
   {
    for(int j=0;j<f;j++)
    {
        if(a[j]==i)
        {
           flag=true;
            break;
        }
    }
    if(flag==false)
    {
         cout<<i<<"is not present in array.\n ";
    }
    flag=false;
   }
}
void firstduplicate()
{
    //int n;
   // cout<<"Enter The Index: ";
    //cin>>n;
    int a[10]={1,2,3,3,5,5,7,8,10,10};
    bool flag=false;
    for(int i=0;i<10;i++)
    {
       for(int j=i+1;j<10;j++)
      {
        if(a[i]==a[j])
        {
           flag=true;
           break;
        }  
      }
      if(flag==true)
        {
             cout<<a[i]<<"  Is First Duplicate Element."<<endl;
             //exit(0);
             break;
        } 
    }
}
void delduplicate()
{
    int a[11]={1,2,3,3,5,5,6,7,9,4,2};
  //  int dup;
    //int size=sizeof(a);
    for(int i=0;i<11;i++)
    {
        //dup=a[i];
        for(int j=i+1;j<11;j++)
        {
            if(a[i]==a[j])
            {
                //a[i]=0;
                a[j]=0;
            }
        }
    }
    for(int i=0;i<11;i++)
    {
       // int h=0;
        if(a[i]!=0)
        {
            //a[h]=a[i];
          //  h++;
            cout<<a[i]<<",";
        }
       
      }
 }
 void search()
 {
    int a[5]={1,2,3,4,5};
    int b[5]={2,3,1,0,5};
    bool flag=false;
    for(int i=0;i<sizeof(a);i++)
    {
        for(int j=0;j<sizeof(b);j++)
        {
            if(a[i]==a[j])
            {
                flag=true;
            }
        }
        if(flag==false)
        {
            cout<<a[i]<<" Is Not Present In Secon Array.";
        }
    }

 }



