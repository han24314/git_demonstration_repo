#include "stdio.h"
typedef struct 
{
    int age;
    char class[8];
}student;

void sort(student arr[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        student s = arr[i];
        for (int j =i+1; j < n; j++)
        {
            if (s.age < arr[j].age) 
            {
                s = arr[j];
                arr[j] = arr[i];
                arr[i] = s;
            }
        }
    }
}

int main()
{
    student stu[3];
    stu[0] = (student){6,"一班"};
    stu[1] = (student){8,"二班"};
    stu[2] = (student){10,"三班"};
    sort(stu,3);
    for(int i;i < 3;i++)
    {
        printf("第%d个学生:年龄为%d,班级为%s\n",i,stu[i].age,stu[i].class);
    }
    return 0;
}
}
}