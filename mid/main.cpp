#include <iostream>

using namespace std;

int main()

{

    #define freezingPoint 32
    #define scalePoint (5.0/9.0)

    double cel;
    double fah;




    cout<<"enter temperature in fahrenheit:";

    cin>>fah;

    cel=(fah-freezingPoint)*(scalePoint);

    cout<<"the temperature in celcius is :"<<cel<<endl;



/*
    int age;
    cout << "enter a digit:"<< endl;
    scanf("%d", &age);

    cout<<age <<endl;
    */






    return 0;
}
