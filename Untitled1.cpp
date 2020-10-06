#include<bits/stdc++.h>
using namespace std;
check_inv_count(vector<int>p,int l, int r)
{
	int i,j,count=0;
	for(i=0;i<p.size()-1;i++)
	{
		for(j=i+1;j<p.size();j++)
		{
			if(p[i]>p[j])
			{
				count++;
			}
		}
	}
	return count;
}
int main()
{
  int n,k,i,l,r,temp,m,d;
  cin>>n;
  vector<int>num;
  for(i=0;i<n;i++)
  {
  	cin>>k;
    num.push_back(k);	
  }
  int q;
  cin>>q;
  while(q!=0)
  {
  
  cin>>l>>r;
  m=(l+r-2)/2;
  for(i=l-1;i<=m;i++)
  {
  	temp=num[i];
  	num[i]=num[n-1-i];
  	num[n-1-i]=temp;
  }
  d=check_inv_count(num,0,n);
  if(d&1)
  {
  	cout<<"odd"<<" "<<d;
  }
  else
  {
  	cout<<"even"<<" "<<d;
  }
  }
}
