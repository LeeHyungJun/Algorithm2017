#include <stdio.h>
#include <string.h>
#include <cstring>
void my_strcat(char* str1, char* str2) {
	int len = strlen(str1);
	while (*str2) {
		*(str1 + len++) = *str2;
		//주소값이동, index를 다음으로 하는 것과 같은 효과
		str2++;
	}
}

int main() {
	char str1[15] = "love";
	char str2[10] = "holic";

	my_strcat(str1, str2);
	printf("%s\n", str1);
	return 0;
}
