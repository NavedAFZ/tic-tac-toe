# include<bits/stdc++.h>
using namespace std;
# include<stdlib.h>
int main()
{

    char a[5][5];
 //   bool a=true;
    /*************************************************/
    int c=49;
   // int j=1;
   for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i%2==0&&j%2==0)
            {

            //char b=c-;
            a[i][j]=char(c) ;
            c++;           }
        }
        //cout<<endl;
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
        if(j%2!=0)
        {
            a[i][j]='|';
        }
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
        if(i%2!=0)
        {
            a[i][j]='-';
        }
        }
    }
    a[1][1]='+';
    a[1][3]='+';
    a[3][1]='+';
    a[3][3]='+';
    cout<<"TABLE-1"<<endl;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    /************************************************/

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i%2==0&&j%2==0)
            {

            //char b=c-;
            a[i][j]=' ' ;
                     }
        }
        //cout<<endl;
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
        if(j%2!=0)
        {
            a[i][j]='|';
        }
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
        if(i%2!=0)
        {
            a[i][j]='-';
        }
        }
    }
    a[1][1]='+';
    a[1][3]='+';
    a[3][1]='+';
    a[3][3]='+';
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    cout<<"Let's start"<<endl;
    cout<<endl;
    /******************************************************/

 int a1=1;
    int b[3][3];
    while(a1)
    {
      //  cout<<"1'st player turn  "<<"0"<<endl;

        cout<<"choose position according to table 1 and enter value"<<endl;
        cout<<"Enter 1 for player 1"<<endl;
        cout<<"Enter 2 for player 2"<<endl;
        int pl;
        cin>>pl;
        int num;
        cin>>num;
        /***************************/
        if(num==1&&a[0][0]==' '&&pl==1)
        {
            a[0][0]='0';
            b[0][0]=0;
        }
        else if(num==2&&a[0][2]==' '&&pl==1)
        {
            a[0][2]='0';
            b[0][1]=0;
        }
        else if(num==3&&a[0][4]==' '&&pl==1)
        {
            a[0][4]='0';
            b[0][2]=0;
        }
        else if(num==4&&a[2][0]==' '&&pl==1)
        {
            a[2][0]='0';
            b[1][0]=0;
        }
        else if(num==5&&a[2][2]==' '&&pl==1)
        {
            a[2][2]='0';
            b[1][1]=0;
        }
        else if(num==6&&a[2][4]==' '&&pl==1)
        {
            a[2][4]='0';
            b[1][2]=0;
        }
        else if(num==7&&a[4][0]==' '&&pl==1)
        {
            a[4][0]='0';
            b[2][0]=0;
        }
        else if(num==8&&a[4][2]==' '&&pl==1)
        {
            a[4][2]='0';
            b[2][1]=0;
        }
        else if(num==9&&a[4][4]==' '&&pl==1)
        {
            a[4][4]='0';
            b[2][2]=0;
        }


        /**********/
        if(num==1&&a[0][0]==' '&&pl==2)
        {
            a[0][0]='*';
            b[0][0]=1;
        }
        else if(num==2&&a[0][2]==' '&&pl==2)
        {
            a[0][2]='*';
            b[0][1]=1;
        }
        else if(num==3&&a[0][4]==' '&&pl==2)
        {
            a[0][4]='*';
            b[0][2]=1;
        }
        else if(num==4&&a[2][0]==' '&&pl==2)
        {
            a[2][0]='*';
            b[1][0]=1;
        }
        else if(num==5&&a[2][2]==' '&&pl==2)
        {
            a[2][2]='*';
            b[1][1]=1;
        }
        else if(num==6&&a[2][4]==' '&&pl==2)
        {
            a[2][4]='*';
            b[1][2]=1;
        }
        else if(num==7&&a[4][0]==' '&&pl==2)
        {
            a[4][0]='*';
            b[2][0]=1;
        }
        else if(num==8&&a[4][2]==' '&&pl==2)
        {
            a[4][2]='*';
            b[2][1]=1;
        }
        else if(num==9&&a[4][4]==' '&&pl==2)
        {
            a[4][4]='*';
            b[2][2]=1;
        }


        for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
        /****************************************/
        for(int i=0;i<3;i++)
        {
            int sum=0;
            int sum1=0;
          for(int j=0;j<3;j++)
          {
              if(b[i][j]==0)
              {
                  sum++;
              }
             else if(b[i][j]==1)
             {
                 sum1++;
             }
          }
          if(sum==3)
          {
              cout<<"     -   -     "<<endl;
              cout<<"     +(@)+     "<<endl;
              cout<<"       ~       "<<endl;

              cout<<"player 1 wins"<<endl;
              a1=0;
              break;
          }
          else if(sum1==3)
          {
              cout<<"     -   -     "<<endl;
              cout<<"     +(@)+     "<<endl;
              cout<<"       ~       "<<endl;

              cout<<"player 2 wins"<<endl;
              a1=0;
              break;
          }
        }

        for(int i=0;i<3;i++)
        {
            int sum=0;
            int sum1=0;
          for(int j=0;j<3;j++)
          {
              if(b[j][i]==0)
              {
                  sum++;
              }
             else if(b[j][i]==1)
             {
                 sum1++;
             }
          }
          if(sum==3)
          {
              cout<<"     -   -     "<<endl;
              cout<<"     +(@)+     "<<endl;
              cout<<"       ~       "<<endl;

              cout<<"player 1 wins"<<endl;
              a1=0;
              break;
          }
          else if(sum1==3)
          {
              cout<<"     -   -     "<<endl;
              cout<<"     +(@)+     "<<endl;
              cout<<"       ~       "<<endl;

              cout<<"player 2 wins"<<endl;
              a1=0;
              break;
          }
          if((b[0][0]==b[1][1]&&b[1][1]==b[2][2])&&(b[0][0]==1&&b[1][1]==1&&b[2][2]==1)||(b[0][2]==b[1][1]&&b[1][1]==b[2][0])&&(b[0][2]==1&&b[1][1]==1&&b[2][0]==1))
          {
              cout<<"     -   -     "<<endl;
              cout<<"     +(@)+     "<<endl;
              cout<<"       ~       "<<endl;

              cout<<"player 2 win"<<endl;
              a1=0;
              break;
          }
          if((b[0][0]==b[1][1]&&b[1][1]==b[2][2])&&(b[0][0]==0&&b[1][1]==0&&b[2][2]==0)||(b[0][2]==b[1][1]&&b[1][1]==b[2][0])&&(b[0][2]==0&&b[1][1]==0&&b[2][0]==0))
          {
              cout<<"     -   -     "<<endl;
              cout<<"     +(@)+     "<<endl;
              cout<<"       ~       "<<endl;
              cout<<"player 1 win"<<endl;
              a1=0;
              break;
          }
          int lu=0;
          for(int r=0;r<3;r++)
          {
              for(int q=0;q<3;q++)
              {
                  if((b[r][q]==1)||(b[r][q]==0))
                  {
                      lu++;
                  }
              }
          }
          if(lu==9)
          {
              cout<<"     -   -     "<<endl;
              cout<<"     +(@)+     "<<endl;
              cout<<"       ~       "<<endl;
              cout<<"     khichdi khalo       "<<endl;
              a1=0;
              break;

          }
        }
        /*******************************************************/




    }
}
