/*
Can store data of different data types
struct B1{
    int roll;
    float height;
    string name;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
            break;
    }
}

int main(){
    B1 student;
    student.roll=123;
    student.height=5.8;
    student.name="Aditya";

    B1 students[123,5.8,"Aditya"];
     
    B1 studentss[5];
    studentss[0].roll=1;
    B1 studentss[0].height=5.8;
    B1 studentss[0].name="Aditya";

    for(int i=0;i<n;i++){
        scanf("%d",&studentss[i].roll);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (studentss[j].roll > studentss[j + 1].roll) {
                swap(studentss[j].roll, studentss[j + 1].roll);
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",&studentss[i].roll);
    }
}
*/

