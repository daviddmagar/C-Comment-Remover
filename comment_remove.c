#include <stdio.h>

main(){
	int c;
	int d;
	int e;
	int f;
	c = getchar();
	while(c != EOF)	{
		if(c != '/'){
			putchar(c);
			c = getchar();
		}
			

		else{
			d = c;
			c = getchar();
	
			//Catch single line comments
			if(c == '/'){
				while(c != '\n'){
					c = getchar();
				}
				c = getchar();
			}
			//end single line
			

			//Catch block comment
			else if(c == '*'){
				c = getchar();
				while(c != '*'){
					c = getchar();
				}
				e = c;
				c = getchar();
				if(c == '/'){
					c = getchar();
				}
				if(c == '\n'){
					c = getchar();
					}
				//else 
					//putchar(e);
			}
			//end block 

			else
				putchar(d);
		

		}
	}
}

