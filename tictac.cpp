#include<iostream>
//#include<string>
using namespace std;

//int a =2;
//int b =2;
string location[3][3];

//template<class Player>
  //  Player p1;
    //Player p2;

void inputNumber(int num, string p )
{
   
    
        if(num ==1)
            location[0][0]=p;
        else if(num == 2)
            location[0][1]=p;
        else if(num == 3)
            location[0][2]=p;
        else if(num == 4)
            location[1][0]=p;
        else if(num ==5)
            location[1][1]=p;
        else if(num ==6)
            location[1][2]=p;
        else if(num == 7)
            location[2][0]=p;
        else if(num ==8)
            location[2][1]=p;
        else if(num ==9)
            location[2][2]=p;
    
    /*
    else
    {

        if(num ==1)
            location[0][0]="o";
        else if(num == 2)
            location[0][1]="o";
        else if(num == 3)
            location[0][2]="o";
        else if(num == 4)
            location[1][0]="o";
        else if(num ==5)
            location[1][1]="o";
        else if(num ==6)
            location[1][2]="o";
        else if(num == 7)
            location[2][0]="o";
        else if(num ==8)
            location[2][1]="o";
        else if(num ==9)
            location[2][2]="o";
    }
    */
}

void actualTicTac()
{
    int k =0;
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            k++;
            location[i][j]=to_string(k);
            //k++;
        }
        //k++;
    }
}


void display()
{
    int a = 2;
    int b =2;
    for(int i=0; i<=a;i++)
    {
        for(int j=0;j<=b;j++)
        {
            cout<<location[i][j]<<"|";
        }
        cout<<endl;
        cout<<"------"<<endl;
    }

    
    
}

/*
string declareWinner()
{
   // cout<<"the winner is :"location[i][j]<<endl;
  //cout<<"the winner is: "<<endl;
}
*/
bool checkLines()
{  
    if((location[0][0]==location[0][1]&& location[0][1]==location[0][2])||(location[1][0]==location[1][1] && location[1][1]==location[1][2])||(location[2][0]==location[2][1]&&location[2][1]==location[2][2]))// horizontal 
        return true;
    else if((location[0][0]==location[1][0]&&location[1][0]==location[2][0])||(location[0][1]==location[1][1]&&location[1][1]==location[2][1])||(location[0][2]==location[1][2]&&location[1][2]==location[2][2]))// vertical
        return true;
    else if((location[0][0]==location[1][1]&&location[1][1]==location[2][2])||(location[0][2]==location[1][1] && location[1][1]==location[2][0]))//diagonals
        return true;

    
    return false;
    
}

void takeInput()
{
    int input1;
    int input2;
    while(checkLines() == false)
    {
        //int input1;
        //int input2;
        string p1="x";
        string p2="o";
        cout<<"where would you like to put your mark, choose a number and sign:"<<endl;
        cin>>input1;
        //cin>>p1;
        inputNumber(input1, p1);
        display();
        cout<<"where would you like to put your mark, choose a number:"<<endl;
        cin>>input2;
        //cin>>p2;
        inputNumber(input2, p2);
        display();
        // check if there there are diagonal or liens are full
    }

    cout<<"game over:"<<endl;

}


int main()
{
    //location[2][2];
    actualTicTac();
    takeInput();
    return 0;



}