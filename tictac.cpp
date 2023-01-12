/*
Name: Tenzing Nyima

Tic Tac created mostly using if and else statements,




*/

#include<iostream>
//#include<string>
#include<vector>
using namespace std;




void inputNumber(vector<vector<string>> &location, int num, string p )
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
    
 
}

void actualTicTac(vector<vector<string>> &location)
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


void display(vector<vector<string>> &location)
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
bool checkLines(vector<vector<string>> &location)
{  
    if((location[0][0]==location[0][1]&& location[0][1]==location[0][2])||(location[1][0]==location[1][1] && location[1][1]==location[1][2])||(location[2][0]==location[2][1]&&location[2][1]==location[2][2]))// horizontal 
        return true;
    else if((location[0][0]==location[1][0]&&location[1][0]==location[2][0])||(location[0][1]==location[1][1]&&location[1][1]==location[2][1])||(location[0][2]==location[1][2]&&location[1][2]==location[2][2]))// vertical
        return true;
    else if((location[0][0]==location[1][1]&&location[1][1]==location[2][2])||(location[0][2]==location[1][1] && location[1][1]==location[2][0]))//diagonals
        return true;
    

    
    return false;
    
}

void takeInput(vector<vector<string>> &location)
{
    int input1;
    int input2;
    int i = 0;
    while(checkLines(location) == false && i <= 9)
    {   
        i ++;
        //int input1;
        //int input2;
        display(location);
        string p1="x";
        string p2="o";
        cout<<"where would you like to put your mark, choose a number and sign:"<<endl;
        cin>>input1;
        //cin>>p1;
        if( i == 9  || checkLines(location) == true){
            break;
        }
        
        ++i;
        inputNumber(location, input1, p1);
        display(location);
        cout<<"where would you like to put your mark, choose a number:"<<endl;
        cin>>input2;
        //cin>>p2;
        inputNumber(location, input2, p2);
        
        // check if there there are diagonal or liens are full
    }

    if(i == 9 && checkLines(location) == false){
        cout<<" Draw"<<endl;
    }else if(checkLines(location) == true){
        cout<<"congratulations!!"<<endl;
    }else{
        cout<<"game over:"<<endl;
    }


    

}


int main()
{   
    vector<vector<string>> location(3, vector<string>(3));


    actualTicTac(location);
    takeInput(location);
    return 0;


// tic tac completed.


}