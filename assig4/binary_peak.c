#include<stdio.h>

int binarysearch(int[],int,int);

int main()
{
	int a[]={2,5,7,9,10,6,3,1,4};
	int n=(sizeof(a)/sizeof(a[0]));
	printf("The peak element is %d",binarysearch(a,0,n-1));
	return 0;
}

int binarysearch(int arr[], int low, int high)
{
	int mid;
	if(low==high)
	{
		return arr[low]; // only one element in the list
	}
	
	if((high==low+1) && arr[low]>arr[high])
	{
		return arr[low];
	}
	
	if((high==low+1) && arr[high]>arr[low])
	{
		return arr[high];
	}
	
	mid = (low + high) / 2;
	
	if(arr[mid]>arr[mid+1] && arr[mid] > arr[mid-1])
	{
		return arr[mid];
	}
	
	if(arr[mid]>arr[mid+1] && arr[mid] < arr[mid-1])
	{
		return binarysearch(arr,low,mid-1);
	}
	else
	{
		return binarysearch(arr,mid+1,high);
	}
}
