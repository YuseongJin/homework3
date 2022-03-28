#include<stdio.h>//stdio.h(표준입출력 라이브러리) 헤더 파일에 선언된 내용을 포함
#include<stdlib.h>//stdlib.h(C 표준 유틸리티 함수들을 모아놓은 헤더파일) 헤더 파일에 선언된 내용을 포함
void main()//메인 함수
{
int **x;//이중 포인터 변수X선언

printf("[----- [Jin Yuseong] [2018038022] -----]\n");//이름, 학번 출력
//%lu:long unsigned decimal  
printf("sizeof(x) = %lu\n", sizeof(x));
printf("sizeof(*x) = %lu\n", sizeof(*x));
printf("sizeof(**x) = %lu\n", sizeof(**x));
//4로 모두 동일한 값 출력, 모두 같은 타입이 되기 때문에 이러한 결과가 발생
}