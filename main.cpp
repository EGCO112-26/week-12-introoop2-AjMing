#include <iostream>
using namespace std;

#include "student.h"
//#define N 3
int main(int argc, char* argv[]) {
  int N=(argc-1)/2;
  
  student *a=new student [N];

  // Set age and set name for the first two ppl

  int i,age,c=0;
  string n;
   // 1. Ask for N names and N age using cin
  for(i=0;i<N;i++){ 
    /*cout<<"Student "<<i<<endl;
    cout<<"name:";
    cin>>n;*/
    a[i].set_name(argv[i*2+1]);
    a[i].set_age(atoi(argv[i*2+2]));
     
    //ถามอายุด้วย !!!!
  }
 
  //2. Print name and age of all N ppl
  for(i=0;i<N;i++){ 
      a[i].display();

  }
  
  
  //3. Print name and age of 
  //the youngest person
  //Find what the age of the youngest person
  // Print all info for the yougest person
    
  int young=a[0].get_age();
  for(i=1;i<N;i++){
          if(a[i].get_age()  < young) 
              young=a[i].get_age();
  }

  
  //4. Change input from cin to argv
  cout<<"Youngest student"<<endl;
   for(i=0;i<N;i++){
    if(a[i].get_age()==young) a[i].display();

   } 
   delete []a;
 return 0;

    
  }
  
  


