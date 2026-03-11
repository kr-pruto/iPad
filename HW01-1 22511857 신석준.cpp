/*March 9,2026    이름: 신석준
HW01-1 직사각형의 가로, 세로 길이를 입력 받은 후 넓이, 둘레, 대각선 길이 구하기*/

#include <stdio.h>
#include <math.h>

int main(void){
	int width, length;
	double area, perimeter, diagonal;
	while (1){
		printf("직사각형의 가로, 세로 길이를 입력하시오(0 0 입력 시 종료): ");
		scanf("%d %d", &width, &length);
		area = (double)width * (double)length;
		perimeter = (double)width * 2 + (double)length * 2;
		diagonal = sqrt((double)width ** 2 + (double)length ** 2);
		printf("직사각형의 가로 길이: %d, 세로 길이: %d, 넓이: %lf, 둘레: %lf, 대각선 길이: %lf", width, length, area, perimeter, diagonal);
	}
	return 0;
}