#include <stdio.h>//stdio.h(표준입출력 라이브러리) 헤더 파일에 선언된 내용을 포함
struct student {//student 구조체 정의
//구조체 멤버 정의
char lastName[13]; /* 13 bytes,(char형)1byte x 13 */
int studentId; /* (int형)4 bytes */
short grade; /* (short형)2 bytes */
};
int main()//메인함수
{
struct student pst;//student구조체를 pst변수로 선언

printf("[----- [Jin Yuseong] [2018038022] -----]\n");//이름, 학번 출력
//%ld:long decimal 
printf("size of student = %ld\n", sizeof(struct student));
//24,구조체를 정렬할 때 멤버 중에서 가장 큰 자료형(int) 크기의 배수로 정렬하기 떄문에
printf("size of int = %ld\n", sizeof(int));//4
printf("size of short = %ld\n", sizeof(short));//2
return 0;//함수가 종료
}