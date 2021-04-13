#include <stdio.h>
#include <stdlib.h>

int main()
{


	int number,row,col,k;
	int i[3][3],j[3][3],result[3][3];
    for(row=0;row<3;row++)
    {
            for(col=0;col<3;col++)
            {
            printf("\n Enter Any Value of Matrix %d,%d\n",row,col);
            scanf("%d",&i[row][col]);
			}
    }

    for(row=0;row<3;row++)
    {
			for(col=0;col<3;col++)
			{
            printf("\n Enter Any Value of Matrix %d,%d\n",row,col);
            scanf("%d",&j[row][col]);
            printf("\t\t");
			}
    }
    for(row=0;row<3;row++)
    {
            printf("\t\t\t\t\t\n");
			for(col=0;col<3;col++)
            {
            result[row][col]=i[row][col]+j[row][col];
            printf("%d\t",result[row][col]);
            }
            printf("\t\t\t\t\t\n");
    }
            printf("\n\n");
    for(row=0;row<3;row++)
    {
            for(col=0;col<3;col++)
            {
             result[row][col]=0;
             for(k=0;k<3;k++)
            {
            result[row][col]+=i[row][k]*j[k][col];
            }
            }
            }
    for(row=0;row<3;row++)
    {
            printf("\t\t\t\t\t\n");
			for(col=0;col<3;col++)
            {
             printf("%d\t", result[row][col]);
            }
            printf("\t\t\t\t\t\n");
    }
            return 0;
		     }

