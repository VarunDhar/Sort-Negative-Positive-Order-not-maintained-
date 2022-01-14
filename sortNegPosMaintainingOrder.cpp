#include<iostream>
#include<algorithm>
using namespace std;

void sortNeg(int arr[],int size)
{
	int p=0,n=0;//p is position of positive and n is for negative
	
	while(n<size)
	{
		if(arr[n]<0)
			break;
		else
			n++;
	}
	while(p<size)
	{
		if(arr[p]>=0)
		{
			break;
		}
		else
			p++;
	}
	while(p<size and n<size)
	{
		if(arr[p]>=0)
		{
			if(arr[n]<0)
			{
				swap(arr[p],arr[n]);
				p++;
				n++;
			}
			else
			{
				n++;
			}
		}
		else
		{
			p++;
		}
	}
}

int main()
{
	int a[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
	sortNeg(a,9);
	
	for(int i=0;i<9;i++)
	{
		cout<<a[i]<<endl;
	}
}
