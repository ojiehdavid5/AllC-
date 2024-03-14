#include <iostream>
#include <cmath>
using namespace std;
double HypoTriangle(float sideA, float sideB)
{


   double sideC = sqrt((sideA*sideA) + (sideB*sideB));
   return sideC;
}

int main()
{

   int answer=HypoTriangle(12,14) ;

   cout<<answer;

    return 0;
}
