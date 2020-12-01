#include<bits/stdc++.h>

#define ll long long 

using namespace std ;

void solve()
{
	int n ;
	cin>>n;
	int k = 2*n-2 ;
	int num = 1;
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<k ; j++)
			cout<<" ";
		k-=2 ;
		for(int j=0 ; j<=i ; j++)
		{
			cout<<num<<" ";
			num++ ; 
		}
		cout<<"\n";
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve() ;
}
