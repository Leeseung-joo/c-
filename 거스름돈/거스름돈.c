#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int user, change = 0;
	int price, c5000, c1000, c500, c100;
	printf("물건 값을 입력하시오: ");
	scanf("%d", &price); // 물건 값을 입력받는다.
	printf("사용자가 낸 돈: ");
	scanf("%d", &user);
	change = user - price;
	c5000 = change / 5000; 
	change = change % 5000; 
	c1000 = change / 1000; 
	change = change % 1000; 
	c500 = change / 500; 
	change = change % 500; 
	c100 = change / 100; 
	change = change % 100; 
	printf("오천원권: %d장\n", c5000);
	printf("천원권: %d장\n", c1000);
	printf("오백원 동전: %d개\n", c500);
	printf("백원 동전: %d개\n", c100);
	return 0;
}