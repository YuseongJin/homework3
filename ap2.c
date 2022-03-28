#include <stdio.h>//stdio.h(표준입출력 라이브러리) 헤더 파일에 선언된 내용을 포함
#include <stdlib.h>//stdlib.h(C 표준 유틸리티 함수들을 모아놓은 헤더파일) 헤더 파일에 선언된 내용을 포함
void main()//메인 함수
{
int list[5];//크기가 5인 int형 배열list를 선언
int *plist[5];//크기가 5인 int형 포인트 배열plist를 선언
list[0] = 10;//list[0]에 10 대입
list[1] = 11;//list[1]에 11대입
plist[0] = (int *)malloc(sizeof(int));//4바이트 할당하면서 malloc 함수를 호출후 int형으로 변환후 plist[0]에 대입
printf("[----- [Jin Yuseong] [2018038022] -----]\n");//이름, 학번 출력

printf("list[0] \t= %d\n", list[0]);//list[0]의 값 출력,10
printf("address of list \t= %p\n", list);//list의 포인트 주소 출력
printf("address of list[0] \t= %p\n", &list[0]);//list[0]의  주소 출력
printf("address of list + 0 \t= %p\n", list+0);//list+0의 포인트 주소 출력
//0061FF0C로 출력값 동일
printf("address of list + 1 \t= %p\n", list+1);//list+1의 포인트 주소 출력,0061FF10
printf("address of list + 2 \t= %p\n", list+2);//list+2의 포인트 주소 출력,0061FF14
printf("address of list + 3 \t= %p\n", list+3);//list+3의 포인트 주소 출력,0061FF18
//int형은 4바이트이기에 4씩증가
printf("address of list + 4 \t= %p\n", list+4);//list+4의 포인트 주소 출력
printf("address of list[4] \t= %p\n", &list[4]);//list[4]의 주소 출력
//0061FF1C로 출력값 동일
free(plist[0]);//plist[0]을 malloc함수로 동적한 메모리를 해제
}