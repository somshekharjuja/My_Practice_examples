#include<iostream>
using namespace std;

int main()
{
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	int l,h,m,key;
	cout<<"Enter key to be searched"<<endl;
	cin>>key;
	l = 0;
	int size = sizeof(array)/sizeof(array[0]);
	h = size - 1;
	while(l<=h)
	{
		m = (l + (h-1))/2;
		if(array[m] == key)
			cout<<"Key found at "<<m<<endl;
		
		if(array[m]<key)
			l = m+1;
		else
			h = m-1;
	}
	return  0;
}
