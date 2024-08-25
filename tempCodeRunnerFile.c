# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# define _CRT_SECURE_NO_WARNINGS

typedef struct student_info{
    char student_name[20];
    int student_classnum; 
    char student_major[20];
    struct student_info *link; 
}student_information;

int main(){
    
    student_information *s1;
    s1 = (student_information*)malloc(sizeof(student_information));
    if (s1==NULL){
        printf("동적 할당 실패");
        return -1;
    }



    printf("학생 정보 입력 : ");
    scanf("%s", s1->student_name);
    printf("학번 입력 : ");
    scanf("%d", &(s1->student_classnum));
    printf("전공 입력 : ");
    scanf("%s", s1->student_major);
    s1->link = NULL;

    printf("======student_info=====\n");
    printf("%s\n%d\n%s", s1->student_name,s1->student_classnum, s1->student_major);
    
    free(s1);

    

    return 0;
}