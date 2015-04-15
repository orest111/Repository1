
#include <iostream>

int main()
{
	
		int n=10,m=10;
		int i,j;
	int** arr = new int *[n];
	for(i=0;i<n;i++)
	{
		*(arr+i) = new int [n];
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{ arr[i][j]=(i+1)*(j+1);std::cout<<arr[i][j]<<"_";}
	}

 	
	system("Pause");
}