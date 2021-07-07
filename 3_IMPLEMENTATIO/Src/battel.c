#include "main.h"
#include <stdlib.h>
#include <time.h>
void draw_gui(char **pseudo_gui_ptr,int n)
{
    int i,j;

    pseudo_gui_ptr[0][0]=' ';
    for(i=1;i<(n+1);i++)
    {
        pseudo_gui_ptr[0][i]=i+48;
        pseudo_gui_ptr[i][0]=i+48;
    }

    for(i=1;i<(n+1);i++)
    {
        for(j=1;j<(n+1);j++)
        {
            pseudo_gui_ptr[i][j]='+';
        }
    }
}
int randgen(int **ships_ptr,int n)
{
    int i,j,count=0;
    srand((unsigned)time(NULL));
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            ships_ptr[i][j]=rand()%2;
            if(ships_ptr[i][j]==1)
            {
                count++;
            }
        }
    }
    return count;
}
