int main(){
  //declare variables
  int x;
  int y; 
  int sum;

  // read values for x and y from standard input 
  printf("enter value for x: ");
  scanf ("%d" , &x);

  printf("enter value for y: ");
  scanf("%d" , &y);

  sum= x+y;

  //print
  printf("x = %d\n" , x);
  printf("y = %d\n" , y);
  printf("x+y= %d\n", sum);
  
  printf("%d + %d = %d\n" , x,y,sum);
  printf("%d + %d = %d\n" , x,y,(x-y));
  printf("%d + %d = %d\n" , x,y,(x*y));
  return 0;

}