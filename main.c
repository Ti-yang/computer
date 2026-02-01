#include"func.h"


int main() {
	print_hello();
	char next_4[100] = "\nPress Enter to continue...";
	print_main(27, next_4);
	while (getchar() != '\n');

	while (1) {
		char welcome[100] = "Welcome use this computer.";
		print_main(27, welcome);
		print_choice();
		int cho;
		scanf("%d", &cho);
		while (getchar() != '\n');

		if (cho != 5) {
			int res = result(cho);
			char a[100] =  "The final result is";
			print_main(19, a);
			printf("%d\n", res);

			char next_3[100] = "\nPress Enter to continue...";
			print_main(27, next_3);
			while (getchar() != '\n');
			system("cls");

		}
		else if (cho == 5) {
			int x;
			char next_2[100] = "Please input your numbers of stay.>>";
			print_main(36, next_2);
			scanf("%d", &x);
			while (getchar() != '\n');
			print_bin(x);

			char next_1[100] = "\nPress Enter to continue...";
			print_main(27, next_1);
			while (getchar() != '\n');
			system("cls");
		}
		else {
			char f[100] = "Goodbye";
			print_main(7, f);
			break;
		}
	}

	return 0;
}

