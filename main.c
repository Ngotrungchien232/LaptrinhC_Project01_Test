
#include <stdio.h>
#include <stdlib.h>
#include "datatype.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
    int choice, choice1, choice3, choice7, choice5;
    int studentCount= 0;
    int teacherCount= 0;
    int num_classrooms = 0;
	struct Classroom classrooms[50];
    struct Student students[50];
    struct Teacher teachers[50];
    do {
        menuStart();
        printf("\tLua chon cua ban la: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                do{
                    menuAdmin();
                    printf("\tNhap lua chon cua ban: ");
                    scanf("%d", &choice1);
                    switch(choice1){
                        case 1:
                            do {
                                menuStudents();
                                printf("\tNhap lua chon cua ban: ");
                                scanf("%d", &choice3);
                                switch(choice3){
                                    case 1:
                                        addStudent(&studentCount, students);
                                        break;
                                    case 2:
                                        printHeader();
                                        printStudent(studentCount, students);
                                        break;
                                    case 3:
                                    	deleteStudent(&studentCount, students);
                                    	break;
                                    case 4:
                                    	editStudent(studentCount, students);
                                    	break;
                                    case 5:
                                    	searchStudent(studentCount, students);
                                    	break;
                                    case 6:
                                    	sortStudentsByName(studentCount, students);
                                    	break;
                                    case 0:
                                        break;
                                    default:
                                        printf("\tLoi: vui long nhap lai.\n");
                                }
                            }while(choice3!=0);
                            break;
                        case 2: 
    						do {
					        print_classroom_menu();  
					        printf("\tlua chon cua ban la:");
					        scanf("%d", &choice7);
					        switch (choice7) {
					            case 1:
					                add_classroom(classrooms, &num_classrooms);
					                break;
					            case 2:
					                edit_classroom(classrooms, num_classrooms);
					                break;
					            case 3:
					                delete_classroom(classrooms, &num_classrooms);
					                break;
					            case 4:
					                search_classroom(classrooms, num_classrooms);
					                break;
					            case 5:
					                add_student_to_class(classrooms, num_classrooms);
					                break;
					            case 6:
					                remove_student_from_class(classrooms, num_classrooms);
					                break;
					            case 7:
					                sort_classrooms(classrooms, num_classrooms);
					                break;
					            case 8:
					                print_classroom(classrooms, num_classrooms);
					                break;
					            case 9:
					                saveClassroomToFile(num_classrooms, classrooms);
					                break;
					            case 10:
					                loadClassroomFromFile(&num_classrooms, classrooms);
					                break;
					            case 0:
					                printf("Thoat chuong trinh.\n");
					                break;
					            default:
					                printf("Lua chon khong hop le!\n");
					        }
					    } while (choice7 != 0);  
					    break;
                        	

                        case 3:
                        	do{
                        		menuTeacher();
                        		printf("\tNhap lua chon cua ban: ");
                                scanf("%d", &choice5);
                                switch(choice5){
                                	case 1:
                                		addTeacher(&teacherCount, teachers);
                                		break;
                                	case 2:
                                		printHeader2();
                                        printTeacher(teacherCount, teachers);
                                		break;
                                	case 3:
                                    	deleteTeacher(&teacherCount, teachers);
                                    	break;
                                    case 4:
                                    	editTeacher(teacherCount, teachers);
                                    	break;
                                    case 5:
                                    	searchTeacher(teacherCount, teachers);
                                    	break;
                                    case 6:
                                    	sortTeachersByName(teacherCount, teachers);
                                    	break;
                                	case 7:
                                		break;
                                	case 0:
                                		break;
                                	default:
                                		printf("\tLoi:vui long nhap lai.\n");	
                                }
							}while(choice5!=0);
                        	break;
                        case 4:
              				printf("Ban dang su dung he thong quan ly sinh vien bang ngon ngu lap trinh c do Ngo Trung Chien viet");
            				break;
                        case 0:
                        	printf("Ban da chon thoat chuong trinh");
                            break;
                        default:
                            printf("\tLoi: vui long nhap lai.\n");
                    }
                }while(choice1!=0);
                break;
            case 2: // cai nay la quyen truy cap cua sinh vien
                break;
            case 3: // cai nay la quyen truy cap cua teacher
                break;
            case 0:
                printf("\tDang thoat chuong trinh...\n");
                saveStudentToFile(studentCount, students);
                saveClassroomToFile(num_classrooms, classrooms); 
                saveTeacherToFile(teacherCount, teachers);
                break;
            default:
                printf("\n");
				printf("\tLoi: vui long nhap lai\n");
        }
    }while(choice!=0);  
    return 0;
}

