//HERE IS A SMALL GAME  //
#include<iostream>
using namespace std;
void game();
int main()
{
    int a;
    cout<<("\npress any number to start the car\n");
    cin>>a;
    int z;
   cout<<("\npress '101' for 'INSTRUCTIONS' \n");
    cin>>z;
    switch(z==101)
    {
        case 1:
            cout<<("\n1.IMAGINE MAP IN YOUR MIND\n");
            cout<<("\n2.THIS IS BASED ON YOUR IMAGINATION\n");
            cout<<("\n3.SO PLEASE PLAY FOR ENJOYMENT\n");
            cout<<("\n4.PLAY CAREFULLY\n");
            cout<<("\n FOR DIRECTIONS\n");
            cout<<("\n1.TAKE LEFT\n2.TAKE RIGHT\n3.TAKE REVERSE\n4.STOP\n5.HORN\n");
            break;
        case 0:
            cout<<("YOUR OUT OF THE GAME  MATE");
            exit(0);

    }
    int j;
    for(j=0;j<=1000000000;j++)
    {
        game();
    }
}
void game()
{
    int i;
    cin>>i;
    switch(i)
    {
        case 1:
            cout<<("\nTAKEN LEFT \n");
            break;
        case 2:
            cout<<("\nTAKEN RIGHT \n");
            break;
        case 3:
           cout<<("\nTAKEN REVERSE \n");
            break;
        case 4:
            cout<<("\nSTOPPED \n");
            break;
        case 5:
            cout<<("\a \a \a \a");
            break;
        default:
            cout<<("\nenter the correct number mate \n");
            cout<<("\n your out of the game\n");
            exit(0);

    }
}
