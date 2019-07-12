    #include<stdio.h>
    int main(){
    	int k,l;
    	scanf("%d %d",&k,&l);
    	if((k - l) % 10 == 9){
    		printf("%d",k-l-1);
    	}
    	else{
    		printf("%d",k-l+1);
    	}
    	return 0;
    } 