#include <stdio.h>

#define program void main()     // 매크로명 program으로 void main() 함수를 치환
#define print printf     // 매크로명 print로 printf를 치환
#define MAX 100     // 매크로명 MAX 값으로 100을 치환
#define MIN 10     // 매크로명 MIN 값으로 10을 치환

program     // void main()과 같은 의미!
{
  print("MAX : %d MIN : %d", MAX, MIN);     // print는 printf와 같은 의미!
}
