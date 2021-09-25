#include<stdio.h>
//void main()
//{
//	int num,i,j,cellval=0;
//	scanf("%d",&num);
//	for(i=1;i<=num;i++)
//	{
//		for(j=1;j<=(2*num)-1;j++)
//		{
//			if(j<num-i){
//				printf(" ");
//			}
//			else if(i%2==1){
//				printf("%d",cellval++);
//			}
//			else{
//				printf("%d",cellval--);
//			}
//			cellval+=num;
//			printf('\n');
//		}
//	}
//}
//
int main()
{
	int num,i,j,k,cellval;
	scanf("%d",&num);
	for(i=0;i<num;i++){
		for(j=i+1;j<num;j++){
			printf(" ");
		}
		cellval=(i%2==0)? (i*num)+1:(i+1)*num;
		for(k=0;k<num;k++){
			printf("%d ",cellval);
			if(i%2==0){
				cellval+=1;
			}
			else{
				cellval-=1;
			}
		}
		printf("\n");
	}
	return 0;
}
