#include <stdio.h>
#include <stddef.h>
#include <limits.h>

size_t countBits(unsigned value)
{
  int counts = 0;
  for (int i = 0; i < 32; i++)
  {
    int bit_num = (value >> i) & 1;
    if (bit_num == 1)
      counts++;
  }
  return counts;
}

int main()
{
  unsigned value = UINT_MAX; // 10011010010

  size_t result = countBits(value);
  printf("%zu", result);
  return 0;
}