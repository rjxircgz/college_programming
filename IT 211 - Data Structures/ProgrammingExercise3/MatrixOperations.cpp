#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define p printf

void random(int arr[10][10], int row, int col)
{
	srand(time(NULL));
	int i,j;
	for(i=0;i<row;i++)
	{	
		for(j=0;j<col;j++)
		{
			arr[i][j]=(rand()%20)+1;
			if(arr[i][j]<10)
				p("0%d ",arr[i][j]);
			else
				p("%d ",arr[i][j]);
		}
		p("\n");
	}
}
bool add(int R1[10][10],int R2[10][10],int r1, int c1, int r2, int c2)
{
	int R3[10][10],i,j;
	if(c1==c2 && r1==r2)
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				R3[i][j]=R2[i][j]+R1[i][j];
				if(R3[i][j]>9)
					p("%d ",R3[i][j]);
				else
					p("0%d ",R3[i][j]);
			}
		p("\n");
		}
	
	}
	else
	{
		system("cls");
		return false;
	}


}
bool subt(int R1[10][10],int R2[10][10],int r1, int c1, int r2, int c2)
{
	int R3[10][10],i,j;
	if(c1==c2 && r1==r2)
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
					R3[i][j]=R1[i][j]-R2[i][j];
						p("%d ",R3[i][j]);
			}
		p("\n");
		}
	return true;
	}
	else
		return false;
}
void display(int R[10][10], int row, int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{	
		for(j=0;j<col;j++)
		{
			if(R[i][j]>9)
				p("%d ",R[i][j]);
			else
				p("0%d ",R[i][j]);
		}
		p("\n");
	}
}
void scalar(int R[10][10], int row, int col, int sc)
{
	int i,j;
	for(i=0;i<row;i++)
	{	
		for(j=0;j<col;j++)
		{
			if(((R[i][j])*sc)<10)
				p("0%d ",(R[i][j])*sc);
			else
				p("%d ",(R[i][j])*sc);
		}
		
		p("\n");
	}
}
bool multiply(int r1[10][10], int r2[10][10], int ro2, int co1, int ro1, int co2)
{
	int i=0,j=0,k;
	int r3[10][10];
	if(co1==ro2)
	{
		for(k=0;k<ro1;k++)
		{
			printf("\n");
			for(i=0;i<ro1;i++)
			{
				r3[k][i]=0;
				for(j=0;j<co1;j++)
				{
					r3[k][i]+= r1[k][j] * r2[j][i];
				}
				printf("%d ",r3[k][i]);
			
		
			}
			printf("\n");
		}
	}
	else
		return false;
}
void trans(int R[10][10], int x, int y)
{
	int T[10][10];
	int i,j;
	int temp;

	for(i=0;i<x;i++)
		for(j=0;j<y;j++)
		{
			temp=R[i][j];
			T[j][i]=temp;
		}

	for(i=0;i<y;i++)
	{
		for(j=0;j<x;j++)
		{
			if(T[i][j]<10)
				p("0%d ",T[i][j]);
			else
				p("%d ",T[i][j]);
		}
		p("\n");
	}
}