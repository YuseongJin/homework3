#include <stdio.h>//stdio.h(표준입출력 라이브러리) 헤더 파일에 선언된 내용을 포함
#define MAX_SIZE 100//100을 MAX_SIZE로 정의
float sum(float [], int);//float형 sum함수 원형 선언
float input[MAX_SIZE], answer;//float형 input배열, answer 변수 선언
int i;//int형 변수 i 선언
void main(void)//메인함수
{
for(i=0; i < MAX_SIZE; i++)
input[i] = i;
//0부터 99까지 input배열에 값 넣기 

printf("[----- [Jin Yuseong] [2018038022] -----]\n");//이름, 학번 출력

/* for checking call by reference */
printf("address of input = %p\n", input);
answer = sum(input, MAX_SIZE);
printf("The sum is: %f\n", answer);
}
float sum(float list[], int n)//sum 함수
{
printf("value of list = %p\n", list);//호출 시 input의 주소값은 sum함수의 list에 복사
printf("address of list = %p\n\n", &list);//변수 list의 메모리 주소 출력
/*004070A0와 0061FF00로 다르다.*/
int i;//int형 변수 i 선언
float tempsum = 0;//float형 tempsum선언 후 0 대입
for(i = 0; i < n; i++)
tempsum += list[i];
//list[0]부터 list[99]까지의 합 tempsum 구하기
return tempsum;//tempsum을 반환
}