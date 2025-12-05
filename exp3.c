/*
Name: Udayan Ghadigaonkar
UIN:251P117
Class: Comp Eng - D
*/
#include <stdio.h>
int main() {
int choice;
float num1 , num2 , result;
start:
  printf("\n---Simple Calculator---\n");
  printf("1 . Addition\n");
  printf("2 . Substraction \n");
  printf("3 . Multiplication \n");
  printf("4 . Division\n");
  printf("5 . Exit\n");
  printf("Enter your choice : ");
scanf("%d" , &choice);

if (choice ==5) {
printf("Exiting...\n");
return 0;
