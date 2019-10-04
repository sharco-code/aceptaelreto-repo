int printf(const char *format, ...);
int scanf(const char *format, ...);
int main(){
	int x,y,c=0;
	signed char b=1;
    scanf("%d",&x);
	if(!x) return 0;
	scanf("%d",&y);
	while(x){
		if((x+1)==y) c++;
		else{
			if(!b) printf(",");
			if(c>0){
				printf("%d-%d",(x-c),x);
				c=0;
			}
			else printf("%d",x);
			b=0;
		}
		x=y;
		if(y>0) scanf("%d",&y);
	}
	printf("\n");
	main();
}