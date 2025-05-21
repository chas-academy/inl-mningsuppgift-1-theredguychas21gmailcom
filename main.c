#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);
    int dice_rolls[100];
    int dice_roll = (rand() % 6) + 1;
    for (int i = 0; i < 100; i++){
        dice_rolls[i] = (rand() % 6) + 1;
        /*printf("%d\n", dice_rolls[i]);*/
    }    
    

    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    int num5 = 0;
    int num6 = 0;
    int sum = 0;

    for(int i = 0; i < 100; i++){
        if(dice_rolls[i] == 1){
            num1++;
        }
        if(dice_rolls[i] == 2){
            num2++;
        }
        if(dice_rolls[i] == 3){
            num3++;
        }
        if(dice_rolls[i] == 4){
            num4++;
        }
        if(dice_rolls[i] == 5){
            num5++;
        }
        if(dice_rolls[i] == 6){
            num6++;
        }
        sum+=dice_rolls[i];
    }
    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);
    printf("%d\n", num4);
    printf("%d\n", num5);
    printf("%d\n", num6);

    printf("%d\n", sum);
    printf("%.1f\n", sum/100.0);
    

    // Your code goes here

    return 0;
}
