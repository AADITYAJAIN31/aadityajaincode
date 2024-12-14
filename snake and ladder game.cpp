#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int i,j,k;
    for(i=1;i<=17;i++)
    {
        cout<<"*"<<" ";
    }
    cout<<endl;
     
    for(j=1;j<=17;j++)
    {
        if(j==1)
        {
            cout<<"*";
        }
        if(j==17)
        {
            cout<<"*";
        }
        
        else 
        {
            for(k=1;k<=10;k++)
            {
            cout<<k<<" ";
            }
            break;
        }
         

    }
    cout<<endl;
    
    for(j=1;j<=17;j++)
    {
        if(j==1)
        {
            cout<<"*";
        }
        if(j==17)
        {
          cout<<"*";
        }
        else
        {
            for(k=11;k<=20;k++)
            {
                cout<<k<<" ";
            }
            break;
        }
        
         
    }
    cout<<endl;

    for(j=1;j<=17;j++)
    {
        if(j==1)
        {
            cout<<"*";
        }
        if(j==17)
        {
          cout<<"*";
        }
        else
        {
            for(k=21;k<=30;k++)
            {
                cout<<k<<" ";
            }
            break;
        }
        
        
    }
    cout<<endl;

    for(j=1;j<=17;j++)
    {
        if(j==1)
        {
            cout<<"*";
        }
        if(j==17)
        {
          cout<<"*";
        }
       else
        {
         for(k=31;k<=40;k++)
        {
            cout<<k<<" ";
        }
        break;
        }
        
    }
    cout<<endl;

    for(j=1;j<=17;j++)
    {
        if(j==1)
        {
            cout<<"*";
        }
        if(j==17)
        {
          cout<<"*";
        }
        else
        {
            for(k=41;k<=50;k++)
            {
                cout<<k<<" ";
            }
            break;
        }
        
        
    }
    cout<<endl;

    for(j=1;j<=17;j++)
    {
        if(j==1)
        {
            cout<<"*";
        }
        if(j==17)
        {
          cout<<"*";
        }
       else
        {
            for(k=51;k<=60;k++)
            {
                cout<<k<<" ";
            }
            break;
        }
        
    }
    cout<<endl;

    for(j=1;j<=17;j++)
    {
        if(j==1)
        {
            cout<<"*";
        }
        if(j==17)
        {
          cout<<"*";
        }
        else
        {
            for(k=61;k<=70;k++)
            {
                cout<<k<<" ";
            }
            break;
        }
        
    }
    cout<<endl;

    for(j=1;j<=17;j++)
    {
        if(j==1)
        {
            cout<<"*";
        }
        if(j==17)
        {
          cout<<"*";
        }
       else
        {
            for(k=71;k<=80;k++)
            {
                cout<<k<<" ";
            }
            break;
        }
        
    }
    cout<<endl;

     for(j=1;j<=17;j++)
    {
        if(j==1)
        {
            cout<<"*";
        }
        if(j==17)
        {
          cout<<"*";
        }
           else
        {
            for(k=81;k<=90;k++)
            {
                cout<<k<<" ";
            }
            break;
        }
    }
    cout<<endl;

    for(j=1;j<=17;j++)
    {
        if(j==1)
        {
            cout<<"*";
        }
        if(j==17)
        {
          cout<<"*";
        }
        else
        {
            for(k=91;k<=100;k++)
            {
                cout<<k<<" ";
            }
            break;
        }
    }
    cout<<endl;

   for(i=1;i<=17;i++)
     {
      cout<<"*"<<" ";
     }
     cout<<endl;
     
    cout<<"\t\t\t Welcome to snake and ladder game \t\t\t\n";
    cout<<"\t\t\t Alternate choices will come and we have to play with dice\t\t\t \n";
    cout<<"\t\t\t The dice will reach 100 first will win the game \t\t\t\n";

    int previousnumber=0,playerchoice;
    int lastnumber=0;
    srand(time(0));
    while(true)
    {
    int secretnumber=1+(rand()%6);
    cout<<endl;
    cout<<"My choice"<<" "<<secretnumber<<endl;
    cout<<endl;
    previousnumber=previousnumber+secretnumber;
    cout<<"I jump at"<<" "<<previousnumber<<endl;
    if(previousnumber==5)
    {
    cout<<"Due to ladder you jump at 30"<<endl;
    previousnumber=30;
    }
    if(previousnumber==35)
    {
        cout<<"Due to snake bite you jump at 6"<<endl;
        previousnumber=6;
    }
    if(previousnumber==40)
    {
    cout<<"Due to ladder you jump at 62"<<endl;
    previousnumber=62;
    }
    if(previousnumber==65)
    {
        cout<<"Due to snake bite you jump at 38"<<endl;
        previousnumber==38;
    }
    if(previousnumber==55)
    {
    cout<<"Due to ladder you jump at 82"<<endl;
    previousnumber=82;
    }
    if(previousnumber==70)
    {
    cout<<"Due to ladder you jump at 95"<<endl;
    previousnumber=95;
    }
    if(previousnumber==99)
    {
        cout<<"Due to snake bite you jump at 3";
        previousnumber=3;
    }
    if(previousnumber>=100)
    {
        cout<<"computer wins the game\n";
        break;
    }


    cout<<"Enter your choice between 1 to 6\n";
    cin>>playerchoice;
    lastnumber=lastnumber+playerchoice;
    cout<<"I jump at"<<" "<<lastnumber<<endl;
    if(lastnumber==5)
    {
    cout<<"Due to ladder you jump at 30"<<endl;
    lastnumber=30;
    }
    if(lastnumber==35)
    {
        cout<<"Due to snake bite you jump at 6"<<endl;
        lastnumber=6;
    }
    if(lastnumber==40)
    {
    cout<<"Due to ladder you jump at 62"<<endl;
    lastnumber=62;
    }
    if(lastnumber==65)
    {
        cout<<"Due to snake bite you jump at 38"<<endl;;
        lastnumber==38;
    }
    if(lastnumber==55)
    {
    cout<<"Due to ladder you jump at 82"<<endl;
    lastnumber=82;
    }
    if(lastnumber==70)
    {
    cout<<"Due to ladder you jump at 95"<<endl;
    lastnumber=95;
    }
    if(lastnumber==99)
    {
        cout<<"Due to snake bite you jump at 3"<<endl;
        lastnumber=3;
    }
    if(lastnumber>=100)
    {
        cout<<"I win the game\n";
        break;
    }
    }
    
    return 0;
}






















    

    
    


    





    



     










