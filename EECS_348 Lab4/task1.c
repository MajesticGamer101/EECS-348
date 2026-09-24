#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int score;

int main(){
while (1) {
  //User input logic 
  printf("Enter 0 or 1 to STOP\n");
  printf("Enter Score: ");
  if (scanf("%d", &score) != 1) {
    printf("Invalid input\n");
    while (getchar() != '\n');   // gets rid of invalid input  
    continue;
  }

  if (score == 0 || score == 1) {
    break;
  }

  if(score < 0){
    printf("Invalid score\n");
    continue;
  }

  printf("Possible combinations of scoring plays if a team's score is %d:\n", score);
  // Score cobination logic 
  for (int td2 = 0; 8*td2 <= score; td2++)
    for (int tdfg = 0; 8*td2 + 7*tdfg <= score; tdfg++)
      for (int td = 0; 8*td2 + 7*tdfg + 6*td <= score; td++)
        for (int fg = 0; 8*td2 + 7*tdfg + 6*td + 3*fg <= score; fg++) {
            int remaining = score - (8*td2 + 7*tdfg + 6*td + 3*fg);
            if (remaining % 2 == 0)
                printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n",
                       td2, tdfg, td, fg, remaining / 2);
        }
  printf("\n");
}

    return 0;
}
