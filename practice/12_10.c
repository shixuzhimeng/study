#include  <stdio.h>
#include <stdlib.h>

int main()
{
	double num1;
	char op;
	double num2;
	scanf("%lf",&num1);
	while(1)
	{
        if(scanf("%c",&op)!=1||op == '\n')
        {
            break;
        }
        scanf("%lf",&num2);
		switch(op)
		{
			case '+':
			num1 += num2;
			break;
			case '-':
			num1 -= num2;
			break;
			case '*':
			num1 *= num2;
			break;
			case '/':
			num1 /= num2;
			break;
		}
	}
    
	printf("%.3lf\n",num1);
	return 0;
}