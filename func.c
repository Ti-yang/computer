#include"func.h"

void print_hello() {
	char* a[] = { "**********************************************\n",
	"****** Welcome to computer *******************\n",
	"**********************************************\n",
	"**********************************************\n",
	"****** Press at will key *********************\n",
	"**********************************************\n",
	};
	for (int i = 0; i < 6; i++) {
		printf("%s", a[i]);
		Sleep(200);
	}
	printf("\n");
}

void print_main(int len, char a[]) {
	for (int i = 0; i < len; i++) {
		printf("%c", *(a + i));
		Sleep(30);
	}
	printf("\n");
}

void print_choice() {
	char* a[] = { "1.add\t",
	"2.sub\t",
	"3.mul\t",
	"4.siv\t",
	"5.bin\t"};
	for (int i = 0; i < 5; i++) {
		printf("%s", a[i]);
		Sleep(200);
	}
	char h[100] = "\nPlease bring in your choice\n";
	print_main(29, h);
}

int add() {
	int a, b, res; 
	char ddd[100] = "Please input your numbers.>>";
	int len = 27;
	print_main(len, ddd);
	scanf("%d %d", &a, &b);
	while (getchar() != '\n');
	if (safe_add(a, b, &res)) {
		printf("Result: %d + %d = %d\n", a, b, res);
		return res;
	}
	else {
		printf("Error: Addition overflow! Result would exceed integer range.\n");
		return 0;
	}
}

int sub() {
	int a, b, res;
	char ddd[100] = "Please input your numbers.>>";
	int len = 27;
	print_main(len, ddd);
	scanf("%d %d", &a, &b);
	while (getchar() != '\n');
	if (safe_sub(a, b, &res)) {
		printf("Result: %d - %d = %d\n", a, b, res);
		return res;
	}
	else {
		printf("Error: Subtraction overflow! Result would exceed integer range.\n");
		return 0;
	}
}

int mul(){
	int a, b, res;
	char ddd[100] = "Please input your numbers.>>";
	int len = 27;
	print_main(len, ddd);
	scanf("%d %d", &a, &b);
	while (getchar() != '\n');
	if (safe_mul(a, b, &res)) {
		printf("Result: %d * %d = %d\n", a, b, res);
		return res;
	}
	else {
		printf("Error: Multiplication overflow! Result would exceed integer range.\n");
		return 0;
	}
}

int siv() {
	int a, b, res;
	char ddd[100] = "Please input your numbers.>>";
	int len = 27;
	print_main(len, ddd);
	scanf("%d %d", &a, &b);
	while (getchar() != '\n');
	if (safe_div(a, b, &res)) {
		printf("Result: %d / %d = %d\n", a, b, res);
		return res;
	}
	else {
		if (b == 0) {
			printf("Error: Division by zero is not allowed!\n");
		}
		else {
			printf("Error: Division overflow! Result would exceed integer range.\n");
		}
		return 0;
	}

}

int result(int cho) {
	int res = 0;
	if (cho == 1) {
		res = add();
	}
	else if (cho == 2) {
		res = sub();
	}
	else if (cho == 3) {
		res = mul();
	}
	else if (cho == 4) {
		res= siv();
	}
	else{
		printf("Invalid choice! Please select 1-4.\n");
		return 0;
	}
	return res;
}

void print_bin_recursive(unsigned int n,int bit) {
	if (bit > 1) {
		print_bin_recursive(n / 2, bit - 1);
	}
	printf("%d", n % 2);

	if (bit > 1 && (bit - 1) % 8 == 7) {
		printf(" ");
	}
	Sleep(50);
}

void print_bin(int x) {
	if (x == 0) {
		printf("0");
		return;
	}
	if (x < 0) {
		unsigned int ux = (unsigned int)x;
		print_bin_recursive(ux, 32);
	}
	if(x > 0) {
		print_bin_recursive((unsigned int)x, 32);
	}
	printf("\n");
}