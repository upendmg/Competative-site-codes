#include <stdio.h>

int main()
{
	int L,W[3],H[3],N;
	scanf("%d",&L);
	scanf("%d",&N);
	
	for(int i=1;i<=N;i++){
		scanf("%d%d",&W[i],&H[i]);
		if(W[i]<L || H[i]<L){
			printf("UPLOAD ANOTHER");
		}
		else if(W[i]>L && H[i]>L){
			printf("CROP IT");
		}
		else if(W[i]==L && H[i]==L){
			printf("ACCEPTED");
		}
		printf("\n");
	}
    return 0;
}

