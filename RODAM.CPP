#include<iostream>
#include<cstdlib>
#include<ctime>
int main()
{
    srand(time(0));
    for(int i=1 ; 1 <= 10; i=i+1)
    {
     std::cout<< (rand() %6) + 1 << i <<"\n" ;
    }
  

    return 0;
}