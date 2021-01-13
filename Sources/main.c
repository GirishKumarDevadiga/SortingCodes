#include <stdio.h>
#include <stdlib.h>
#include "../Headers/sort.h"
#include <assert.h>

void assert_sorting(int32_t list[], uint32_t size){
 int32_t pass;
   
  //for (int i = 0; i < size -1; ++i) {
  //  printf("%d\t", list[i]);
  //}
 //printf("\n");
 for(pass = 0; pass <size-1; ++pass){
  assert(list[pass] <= list[pass+1]);
}
}


void test_bubble_sort() {
    int32_t input[] = {23, 18, 98, 76, 62, 5, 31, 63, 54, 86};
    bubble_sort(input, 10);
    assert_sorting(input, 10);
  
}

void test_selection_sort() {
    int32_t input[] = {23, 18, 98, 76, 62, 5, 31, 63, 54, 86};
    selection_sort(input, 10);
    assert_sorting(input, 10);
  
}

void test_insertion_sort() {
    int32_t input[] = {23, 18, 98, 76, 62, 5, 31, 63, 54, 86};
    insertion_sort(input, 10);
    assert_sorting(input, 10);
  
}

void test_quick_sort() {
    int32_t input[] = {23, 18, 98, 76, 62, 5, 31, 63, 54, 86};
    quick_sort(input, 0, 9);
    assert_sorting(input, 10);
  
}

void test_merge_sort() {
    int32_t input[] = {23, 18, 98, 76, 62, 5, 31, 63, 54, 86};
    merge_sort(input, 0, 9);
    assert_sorting(input, 10);
  
}

int main(){
    test_bubble_sort();
    test_selection_sort();
    test_insertion_sort();
    test_quick_sort();
    test_merge_sort();

    return 0;
}
