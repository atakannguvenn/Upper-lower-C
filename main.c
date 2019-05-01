#include <stdio.h>
int main()
{
      char lower,y;
      printf("Please input a character(0 for terminate): ");
      scanf(" %c",&lower);
      if(lower>='a'&&lower<='z')
            upper_to_lower(lower);
      if(lower>='A'&&lower<='Z')
            lower_to_upper(lower);
      if (lower=='0')
            printf("\nAtakan Guven\n05470076\n");
            return 0;
}
int upper_to_lower(x)
            {
                char upper=('A'+x-'a');
                printf("\nThe uppercase equivalent is: %c\n", upper);
                return main();
            }
int lower_to_upper(x)
            {
                char upper=('a'+x-'A');
                printf("\nThe lowercase equivalent is: %c\n", upper);
                return main();
            }
