    #include <stdio.h>
    #include <string.h>
    int main()
    {
    	int a,b;
    	char x;
    	scanf("%d%c%d",&a,&x,&b);
    	if(x=='+')
    		printf("%d",a+b);
    	else if(x=='-')
    		printf("%d",a-b);
    	else if(x=='/')
    		printf("%d",a/b);
    	else
    		printf("%d",a*b);
    	return 0;
    }