#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char matrix[3][3] ={'1', '2', '3', '4', '5', '6', '7', '8', '9',};
char player = 'x';
void draw()
{
    printf("Tic tac toe\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0;j<3; j++)
        {
            cout <<matrix[i][j] <<" ";
        }
        cout << endl;
    }
}
void input()
{
    int first;
    printf("Which position do you want to mark?");
    scanf("%d", &first);
    if(first == 1)
    {
        matrix[0][0] = player;
    }
    else if(first == 2)
    {
        matrix[0][1] = player;
    }
    else if(first == 3)
    {
        matrix[0][2] = player;
    }
    else if(first == 4)
    {
        matrix[1][0] = player;
    }
    else if(first == 5)
    {
        matrix[1][1] = player;
    }
    else if(first == 6)
    {
        matrix[1][2] = player;
    }
    else if(first == 7)
    {
        matrix[2][0] = player;
    }
    else if(first == 8)
    {
        matrix[2][1] = player;
    }
    else if(first == 9)
    {
        matrix[2][2] = player;
    }
}

int main()
{
    draw();
    cin.get();
    return 0;
}
