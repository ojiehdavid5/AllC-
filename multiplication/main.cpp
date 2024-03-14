#include <iostream>

#include <math.h>
using namespace std;

int main()
{

       int c,b,m,n;
    cout << "enter a value for c:" << endl;
    cin>>c;
        cout << "enter a value for b:" << endl;
         cin>>b;

            cout << "enter a value for m:" << endl;
             cin>>m;

                cout << "enter a value for n:" << endl;
                 cin>>n;

                 int result= (c*(m*n)+(b*(m*n)/(n*m)));
                 cout<<result<<endl;






    /*


const  double pi=3.142;
float A;

int s;


cout<<"enter s to get the area of the hexagon:";
cin>>s;



  float mul = 6*(s*s);
  cout << mul << endl;

  float div = pi/6;
  cout << div << endl;

  float tanCal = (4*tan(3.142/6));
    cout << tanCal << endl;

  A = mul/tanCal*div;
  cout << A << endl;


*/






    /*

    int number;

    cout<<"Enter a number";
    cin>>number;

    int product;


    for (int i=0; i<10; i++){


            product++;

       int multiple=number*product;


       cout<<number <<"x"<< product<< "=" <<multiple<<endl;


    }

    */
    return 0;
}
