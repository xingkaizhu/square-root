#include <stdio.h>
#include<math.h>
int main ()
{
 int n,i,m;
	 float s;
	 scanf("%d",&n);
	 for (i=1;i<=n;i++)
	 {scanf("%d",&m);
	 if(m>=0)
	 {
	 s=sqrt(m);
	 printf("%.2f\n",s);
}
	else printf("ERROR\n");
}
	return 0;
}
