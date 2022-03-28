#include <stdio.h>//stdio.h(표준입출력 라이브러리) 헤더 파일에 선언된 내용을 포함
#include <stdlib.h>//stdlib.h(C 표준 유틸리티 함수들을 모아놓은 헤더파일) 헤더 파일에 선언된 내용을 포함
void main()//메인 함수
{
int list[5];//크기가 5인 int형 배열list를 선언
int *plist[5] = {NULL,};//크기가 5인 int형 포인트 배열plist를 선언 후 첫번째 원소를 NULL이라는 캐릭터 값으로 초기화 하고 나머지를 NULL처리
plist[0] = (int *)malloc(sizeof(int));//4바이트(int형) 할당하면서 malloc 함수를 호출후 int형으로 변환후 plist[0]에 대입, 메모리 공간 필요하기 때문
list[0] = 1;//list[0]에 1 할당                                               
list[1] = 100;//list[1]에 100 할당
*plist[0] = 200;//plist[0]이 가르키는 값에 200 할당

printf("[----- [Jin Yuseong] [2018038022] -----]\n");//이름, 학번 출력

printf("value of list[0] = %d\n", list[0]);//list[0]의 값 출력, 1출력
/*0061FF0C로 출력 동일*/
printf("address of list[0] = %p\n", &list[0]);//list[0]의 주소 출력
printf("value of list = %p\n", list);//list의 포인트 주소값 출력
printf("address of list (&list) = %p\n", &list);//list의 주소 출력
printf("----------------------------------------\n\n");
printf("value of list[1] = %d\n", list[1]);//list[1]의 값을 출력,100
printf("address of list[1] = %p\n", &list[1]);//list[1]의 주소 출력,0061FF10
printf("value of *(list+1) = %d\n", *(list + 1));//(list + 1)이 가르키는 값을 출력,list[1]과 동일,100
printf("address of list+1 = %p\n", list+1);//list+1의 포인터 주소 출력,0061FF10

printf("----------------------------------------\n\n");
printf("value of *plist[0] = %d\n", *plist[0]);//plist[0]이 가르키는 값을 출력,200
printf("&plist[0] = %p\n", &plist[0]);//plist[0]의 주소 출력
printf("&plist = %p\n", &plist);//plist의 주소 출력
printf("plist = %p\n", plist);//plist의 포인터 주소 출력
/*0061FEF8로 출력 동일*/
/*포인트배열 plist[0]-plist[4]의 포인터 주소 출력*/ 
printf("plist[0] = %p\n", plist[0]);//00CC2FD0
printf("plist[1] = %p\n", plist[1]);//00000000
printf("plist[2] = %p\n", plist[2]);//00000000
printf("plist[3] = %p\n", plist[3]);//00000000
printf("plist[4] = %p\n", plist[4]);//00000000
//malloc을 활용하여 plist[0]에만 사용하여서 이러한 출력 발생ㅠ
free(plist[0]);//plist[0]을 malloc함수로 동적한 메모리를 해제
}