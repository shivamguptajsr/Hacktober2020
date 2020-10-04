#include <iostream>
#include<stack>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	    cin>>n;
	    long long int a[n],b[n];
	    for(i=0; i<n; i++)
	        cin>> a[i];
	    stack<long long int>s;
	    for(i=n-1; i>=0; i--)
	    {
	        while(!s.empty() && s.top()<a[i])
	            s.pop();
	        if(s.empty())
	            b[i]=-1;
	        else
	        {
	            b[i] = s.top();
	        }
	        s.push(a[i]);
	    }
	    
	     for(i=0; i<n; i++)
	     {
	         cout<<b[i]<<" ";
	     }
	     cout<<endl;
	}
	return 0;
}
