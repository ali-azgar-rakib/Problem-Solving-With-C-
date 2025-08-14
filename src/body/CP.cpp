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



void CP::validate_subsequence(std::vector<int>arr,std::vector<int>sub){
  int sub_i = 0;
  int sub_max = sub.size()-1;
  for(int i:arr){
    if(i == sub[sub_i]){
      ++sub_i;
      if(sub_i > sub_max){
        std::cout<< "True" << std::endl;
        break;
      }
    }
  }
  std::cout<< "False"<<std::endl;
}
