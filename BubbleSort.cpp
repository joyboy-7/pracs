#include<iostream>

using namespace std;

int main()
{
int n;
cout<<"enter size of an aray: ";
cin>>n;

cout<<"enter elements: ";
int arr[n];
for(int i=0; i<n; i++)
{
cin>>arr[i];
}
////////////////////////////////

for(int i=0; i<n; i++)
{
	for(int j=i+1; j<n; j++)
	{
		if(arr[i]>arr[j])
		{
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
}

///////////////////////////////
cout<<"Sorted array: ";
for(int i=0; i<n; i++)
{
cout<<arr[i]<<" ";
}cout<<endl;

}
