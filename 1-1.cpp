#include <stdio.h>
void binary(int firest,int last,int arr[],int selection,int middl);

int main(){
	int n,a[50],b[50];
    scanf("%d",&n);
    for (int tt =0 ; tt<n ;tt++)
        scanf("%d",&a[tt]); 
    int nx;
    scanf("%d",&nx);
	for (int t =0 ;t<nx ;t++){
        scanf("%d",&b[t]); 
    }
    int middle,z,last;
    for(int gg=0;gg<nx;gg++){
    	middle=(((n-1)/2)/2)+1;
		last=n-1;
    	z=0;
	    binary(z,last,a,b[gg],middle);  
	}
}
void binary(int firest,int last,int arr[],int selection,int middl){
    while(firest <= last){
    	//printf("\nfirest=%d\t\tmiddle=%d\t\tlast=%d\n",*firest,*middle,*last);
    	if (arr[middl] < selection){
    		firest=middl+1;
    	    }
    	else if(arr[middl]==selection){
    		printf("%-2d",middl);
    		break;
    	}
    	else{
    	    last =middl-1;
		}
		middl=(firest+last)/2;
	}
    if (firest > last)
	    printf("%-2d ",-1);
}
