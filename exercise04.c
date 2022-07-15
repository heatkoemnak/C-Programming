//#include<stdio.h>
//
//struct student {
//    char name[50];
//    int roll;
//    float marks;
//} s;
//int main() {
//	int j, clases[5],count_odd=0;
//	printf("class: "); 
//    scanf("%d", &clases[1]);
//    printf("class2: "); 
//    scanf("%d", &clases[2]);
//    printf("class3: "); 
//    scanf("%d", &clases[3]);
//	printf("class4: "); 
//    scanf("%d", &clases[4]);
//    printf("class5: "); 
//    scanf("%d", &clases[5]);
//    printf("class6")
//    scanf("%d", &clases[6]);
//    for (j=)
//    
//}

#include <stdio.h>

struct classinformation{
    char classname[20];
    int door,window;
     

};

void AskForHighestClassEquiment(){
    struct classinmformation class;
    
    struct classinformation classWithHighestEquipment;
    
    int j;

    for(j=0; j<6; j++){
    	
        printf("\nEnter class %d : ", i + 1);
        scanf("%s %d %d", &class.classname, &class.door, &class.window);
        
        if (j == 0 || (classEquipment.door + classEquipment.window ) < (class.window + class.door)){
            classEquipment = class;
        }
    }
    printf("The clas with highest equipment is %s %d %d", classEquipment.classname, classEquipment.door, classEquipment.window);
}