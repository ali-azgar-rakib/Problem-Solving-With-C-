#include "../header/CP.h"
#include <iostream>
#include <unordered_map>

void CP::two_sum(std::vector<int> arr,int target){
  std::unordered_map<int, bool> Sum {};
  int temp = 0;
  for(int a: arr){
temp = target - (a);
    if(Sum.find(temp) != Sum.end()){
      std::cout << "[" << a << " , " << temp << "]" ;
    }else{
      Sum[a] = true;
    }
  }
}
