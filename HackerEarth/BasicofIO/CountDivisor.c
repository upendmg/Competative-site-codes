#include <stdio.h>
int main()
{
	int l,r,k,count=0;
	scanf("%d%d%d",&l,&r,&k);
	for(int n=l;n<=r;n++){
		if(n%k==0){
		count++;
	    }
	}
    printf("%d",count);
    return 0;
}

