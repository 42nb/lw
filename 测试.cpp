#include <iostream>
using namespace std;

int main()
{
	int n,s=0,j,i,t[20000]={0};
	cin>>n;
	for(i=0;i<n;i++)
	cin>>t[i];
    for(i=1;i<n-1;i++)
    {
    	j=i+1;
    	while(t[j-1]==t[j])
    	{
    		j++;
		}
    	if(t[i]<t[i-1]&&t[i]<t[j])
    	s++;
	}

	cout<<s;
	return 0;
}
