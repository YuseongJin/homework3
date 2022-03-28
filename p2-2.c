#include <stdio.h>//stdio.h(표준입출력 라이브러리) 헤더 파일에 선언된 내용을 포함
void print1 (int *ptr, int rows);//print1함수 원형 선언
int main()//메인 함수
{
int one[] = {0, 1, 2, 3, 4};//one 배열 선언후 초기화

printf("[----- [Jin Yuseong] [2018038022] -----]\n");//이름, 학번 출력

printf("one = %p\n", one);
printf("&one = %p\n", &one);
printf("&one[0] = %p\n", &one[0]);
//0061FF0C로 동일한 주소 출력
printf("\n");
print1(&one[0], 5);
return 0;//함수 종료
}
void print1 (int *ptr, int rows)//print1 함수
{/* print out a one-dimensional array using a pointer */
int i;//int형 i 변수 선언
printf ("Address \t Contents\n");//\t: 탭
for (i = 0; i < rows; i++)
printf("%p \t %5d\n", ptr + i, *(ptr + i));
//one[0]을 ptr로 주소값을 받아 출력, 주소가 4씩 증가하는 이유는 int형이 4byte여서
//i만큼 증가할때 마다 가르키는 값도 그 다음의 배열을 가르킴
printf("\n");
}