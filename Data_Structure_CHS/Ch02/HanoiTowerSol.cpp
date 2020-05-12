#include <stdio.h>

//Solve the HanoiTower, Use Recursive

void HanoiTowerMove(int num, char from, char by, char to){
    if(num == 1){
        printf("Disk 1 Move %c to %c. \n", from, to);
    }else{
        HanoiTowerMove(num-1, from, to, by);
        printf("Disk %d Move %c to %c. \n", num, from, to);
        HanoiTowerMove(num-1, by, from, to);
    }
}

int main(int argc, char const *argv[])
{
    // Input Number of Disks
    int input = 0;
    printf("Input Number of Disks : ");
    scanf("%d", &input);
    HanoiTowerMove(input, 'A', 'B', 'C');
    return 0;
}
