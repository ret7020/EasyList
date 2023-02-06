#include <iostream>
#include <vector>
#include "easy_list.h"


void itc_rev_list(vector <int> &mass){
  int temp;
  if (mass.size() > 0){
    for(int i = 0; i <= mass.size() / 2; ++i){
      temp = mass[i];
      mass[i] = mass[mass.size() - 1 - i];
      mass[mass.size() - 1 - i] = temp;
    }
  }
}
void itc_rev_par_list(vector <int> &mass){
  if (mass.size() > 0){
    int temp;
    for(int i = 0; i < mass.size() - 1; i += 2){
      temp = mass[i];
      mass[i] = mass[i + 1];
      mass[i + 1] = temp;
    }
  }
}
void itc_rshift_list(vector <int> &mass){
  if (mass.size() > 0){
  int temp;
  int zero = mass[mass.size()-1];
  for(int i = mass.size() - 1; i > 0; --i) mass[i] = mass[i - 1];
  mass[0] = zero;
  }
}
// Utility shift; non doc
void itc_lshift_list(vector <int> &mass){
  if (mass.size() > 0){
  int store = mass[0];
  for(int i = 1; i < mass.size(); ++i) mass[i - 1] = mass[i];
  mass[mass.size() - 1] = store;
  }
}
void itc_super_shift_list(vector <int> &mass, int n){
  if (mass.size() > 0){
  if(n > 0){
    for(int i = 0; i < (n % mass.size()); ++i) itc_rshift_list(mass);
  }else if(n < 0){
    n *= -1;
    for(int i = 0; i < (n % mass.size()); ++i) itc_lshift_list(mass);
  } 
  } 
}
