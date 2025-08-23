

# include <stdio.h>
  
  int main() {
   
   int marks[100], i, n, sum, lowest, highest;
   double average;
   char choice;
   int classNo = 0;

   do {
    sum = 0;
   printf("\n =========== Class %d =========== \n",classNo+1);
  // Input Number of Student
  printf("\nEnter Number of Student:  ");
  scanf("%d", &n);
  // Input Student Marks
 for(i=0; i < n; ++i) {
   printf("Enter Mark for Student %d:  ", i+1);
   scanf("%d", &marks[i]);
   sum += marks[i];
  }
 //Output of marks entered
  printf("Marks entered: \n");
  for (i = 0; i < n; ++i) {
    printf(" %d\n", marks[i]);
 }
  //Calculating Average 
  average = (double)sum /n;
  printf("Average Mark:  %.2f\n", average);
 
  //Finding highest marks Entered
  highest = marks[0];
  for(i=1; i < n; i++) {
   if(marks[i] > highest) {
    highest = marks[i];
    }
   }
    printf("Highest mark: %d\n", highest);
   
  //Finding Lowest Mark
  lowest = marks[0];
  for(i = 1; i < n; i++) {
    if(marks[i] < lowest) {
     lowest = marks[i];
    }
   }
  printf("Lowest Mark:  %d\n", lowest);
  //Repeatation choice
   printf("Do you want to enter another class (Y or N ): \n ");
   scanf(" %c", &choice);
  
   classNo ++;
  } while (choice == 'Y' || choice == 'n');

  printf("\n");  
  printf("All Marks Succesfuly Received, Good Bye!. \n");

return 0; 
}
