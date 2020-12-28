#include <stdio.h>
#include <stdlib.h>
#include "../Headers/sort.h"
#include <assert.h>

void assert_sorting(int32_t list[], uint32_t size){
 int32_t pass;
 for(pass = 0; pass <size-1; ++pass){
  assert(list[pass] <= list[pass+1]);
}
}


void test_sort(){
    int32_t input[] = {23, 18, 98, 76, 62, 5, 31, 63, 54, 86};
    bubble_sort(input, 10);
    assert_sorting(input, 10);
  
}

int main(){
  test_sort();
  return 0;
}
