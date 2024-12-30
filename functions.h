
# include"datatype.h"

void menuStart();
void menuAdmin();
void menuStudents();
void inputStudent(int *length, struct Student sv[]);
void printHeader();
void printStudent(int length, struct Student sv[]);
void addStudent(int *length, struct Student sv[]);
void saveStudentToFile(int length, struct Student sv[]);
void loadStudentFromFile(int *length, struct Student sv[]);
void deleteStudent(int *length, struct Student sv[]);
void editStudent(int length, struct Student sv[]);
void searchStudent(int length, struct Student sv[]);
void sortStudentsByName(int length, struct Student sv[]);

//menu hien thi ra danh sach tuy chinh giao vien
void menuTeacher();
void printTeacher(int length, struct Teacher tv[]);
void addTeacher(int *length, struct Teacher tv[]);
void printHeader2();
void printTeacher(int length, struct Teacher tv[]);
void saveTeacherToFile(int length, struct Teacher tv[]);
void deleteTeacher(int *length, struct Teacher tv[]);
void editTeacher(int length, struct Teacher tv[]);
void searchTeacher(int length, struct Teacher tv[]);
void sortTeachersByName(int length, struct Teacher tv[]);




//cac ham quan li lop hoc
		void print_classroom_menu();
		void saveClassroomToFile(int length, struct Classroom classrooms[]);
		void loadClassroomFromFile(int *length, struct Classroom classrooms[]);
        void add_classroom(struct Classroom classrooms[], int *num_classrooms);
        void edit_classroom(struct Classroom classrooms[], int num_classrooms);
		void delete_classroom(struct Classroom classrooms[], int *num_classrooms);
		void search_classroom(struct Classroom classrooms[], int num_classrooms);
		void add_student_to_class(struct Classroom classrooms[], int num_classrooms);
		void remove_student_from_class(struct Classroom classrooms[], int num_classrooms);
		void sort_classrooms(struct Classroom classrooms[], int num_classrooms);
		void print_classroom(struct Classroom classrooms[], int num_classrooms);



