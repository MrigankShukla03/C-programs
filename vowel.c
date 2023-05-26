#include <stdio.h>
int main()
{
  int n;
  char vow = 0, con = 0;
  printf("Input the size to be stored in the array :");
  scanf("%d", &n);
  char a[n];

  printf("Input %d elements in the array\n", n);
  for (int i = 0; i <= n; i++)
  {
    scanf("%c", &a[i]);
  }

  for(int i = 0; i <= n; i++)
  {
    if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
    {
      vow = vow + 1;
    }
    else
    {
      con = con + 1;
    }
  }
  printf("Vowels are: %d,\nConsonants are: %d\n", vow, con);
  return 0;
}
