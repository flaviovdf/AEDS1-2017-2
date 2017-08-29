#include <stdio.h>
main(){
  float f;
  double d;
  
  printf("Digite um float: ");
  scanf("%f",&f);
  printf("O float digitado foi %.20f\n",f);

  printf("Digite um double: ");
  scanf("%lf",&d);
  printf("O double digitado foi %.20lf\n",d);
  
}
