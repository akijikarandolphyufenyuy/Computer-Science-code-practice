#include<stdio.h>
int main()
{
int mat1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int mat2[3][3]={{9,8,7},{6,5,4},{3,2,1}};
int i,j;
printf("*******first matrix is*******\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("mat1[%d][%d]=%d\n",i,j,mat1[i][j]);
}

}
printf("*******second matrix*******\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("mat2[%d][%d]=%d\n",i,j,mat2[i][j]);
    }
}
printf("*******sum of the two matrices*******\n");
for(i = 0;  i < 3; i++)
{
    for(j = 0;j < 3;j ++)
    {
printf(" %d ", mat1[i][j] + mat2[i][j]);
    }
    printf("\n");
}

getch();
}
