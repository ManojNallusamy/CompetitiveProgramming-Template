#include<bits/stdc++.h>
using namespace std;
int hor(int m[][9],int i,int j,int val)
{
	for(j=0;j<9;j++)
	{
		if(m[i][j]==val)
			return 0;
	}
	return 1;
}
int ver(int m[0][9],int i,int j,int val)
{
	for(i=0;i<9;i++)
	{
		if(m[i][j]==val)
			return 0;
	}
	return 1;
}
int box(int m[][9],int i,int j,int val)
{
	int it=i/3,jt=j/3;
	for(i=it*3;i<it*3+3;i++)
	{
		for(j=jt*3;j<jt*3+3;j++)
		{
			if(m[i][j]==val)
				return 0;
		}
	}
	return 1;
}
int solve(int m[][9],int i,int j)
{
	//cout<<i<<" "<<j<<"\n";
	int it;
	while(m[i][j]!=0)
	{
		if(i<8)
			i++;
		else if(i==8 and j<8)
		{
			i=0;
			j++;
		}
		else if(i==8 and j==8)
			return 1;
	}
	for(it=1;it<=9;it++)
	{
		if(hor(m,i,j,it)==1 and ver(m,i,j,it)==1 and box(m,i,j,it)==1)
		{
			m[i][j]=it;
			//cout<<i<<" "<<j<<"="<<it<<"\n";
			if(solve(m,i,j)==1)
				return 1;
			else
				m[i][j]=0;
			//cout<<"yguyf";

		}
	}
	return 0;
}
int main()
{
	int m[][9]={{4,0,0,8,0,5,0,0,9},
			   {0,0,5,0,0,0,0,8,6},
			   {0,0,0,0,0,0,0,0,0},
			   {0,7,0,0,0,9,5,0,0},
			   {3,0,0,0,5,0,0,0,0},
			   {0,0,6,0,7,0,1,0,0},
			   {0,3,0,0,0,0,0,0,4},
			   {5,0,0,0,3,7,2,0,0},
			   {0,6,0,9,0,0,0,0,0}};
	int i,j;		   
	if(solve(m,0,0)==1)
	{
		for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
				cout<<m[i][j]<<" ";
			}
			cout<<"\n";
		}
	}		   
	else
	{
		cout<<"\nNot possible....";
	}

}