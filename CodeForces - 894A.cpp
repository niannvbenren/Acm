#include<bits/stdc++.h>
using namespace std;
char s[1000];
int main()
{
	while (scanf("%s",s)!=EOF)
	{
		int len=strlen(s);
		int l=0,r=0,tot=0;
		
		for (int i=0;i<len;i++)
			if (s[i]=='Q') r++; 
		for (int i=0;i<len;i++)
		{
			if (s[i]=='Q') l++,r--;
			if (s[i]=='A') tot+=l*r;
		}
		printf("%d\n",tot);
	}
} 
