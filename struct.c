#include <stdio.h>//stdio.h(표준입출력 라이브러리) 헤더 파일에 선언된 내용을 포함
struct student1 {//student1 구조체 정의
//구조체 멤버정의
char lastName;
int studentId;
char grade;
};
typedef struct {
//구조체 멤버정의
char lastName;
int studentId;
char grade;
} student2;//student2 구조체 정의
int main() {//메인 함수
struct student1 st1 = {'A', 100, 'A'};//student1구조체를 st1변수로 선언 및 초기화

printf("[----- [Jin Yuseong] [2018038022] -----]\n");//이름, 학번 출력

printf("st1.lastName = %c\n", st1.lastName);//st1.lastName 출력
printf("st1.studentId = %d\n", st1.studentId);//st1.studentId 출력
printf("st1.grade = %c\n", st1.grade);//st1.grade 출력
student2 st2 = {'B', 200, 'B'};//student2구조체를 st2변수로 선언 및 초기화
printf("\nst2.lastName = %c\n", st2.lastName);//st2.lastName 출력
printf("st2.studentId = %d\n", st2.studentId);//st2.studentId 출력
printf("st2.grade = %c\n", st2.grade);//st2.grade 출력

student2 st3;//student2구조체를 st3변수로 선언
st3 = st2;//st3에 st2 대입
printf("\nst3.lastName = %c\n", st3.lastName);//st3.lastName 출력
printf("st3.studentId = %d\n", st3.studentId);//st3.studentId 출력
printf("st3.grade = %c\n", st3.grade);//st3.grade 출력
//st2와 st3가 동일한 출력

/* equality test */
if(st3 == st2) /* not working */
//st3 == st2 이라면 
//구조체는 같은 구조체 타입이라고 하더라도 두 개의 변수 자체를 직접 비교하는 건 불가능
//if(st2.lastName == st3.lastName&&st2.studentId&&st3.studentId&&st2.grade==st3.grade)

printf("equal\n");//equal출력
else//아니라면
printf("not equal\n");//not equal출력
return 0;//함수가 종료

}
 