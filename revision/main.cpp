#include <iostream>

using namespace std;
#include <cmath>

//int power(int superscript,int degree );
/*
double power(double x, double n, double product = 1) {
    if (n <= 0) return product;
    product *= x;
    return power(x, n - 1, product);
}

*/
int main()
{

/*
    double celcius;
    double fahrenheit;
    double scaleFactor=5/9;
    double freezingPoint=32;

    cout<<"enter temperature in fahrenheit"<<endl;
    cin>>fahrenheit;


    celcius=(fahrenheit-freezingPoint)*scaleFactor;

    cout<<celcius;


float  v, a, b, c, root1, root2 ;
cout << "P1ease enter the first number " ;
cin >> a ;
cout << "P1ease enter  the second number ";
cin  >>  b ;
cout << "P1ease enter the  third number " ;
cin  >> c ;
 v =  sqrt ( (b  *  b )  - (4  *  a  *  c)) ;
 root1  =  (-b  + v  )  /  (2  *  a);
root2 =  (-b  - v )  /  (2  *  a);
cout << "\n first root : " << root1 << endl ;
 cout << "\n second root : " << root2 << endl ;
*/

/*

int superscript;
int degree;
int getAnswer;
int power;

cout<<"enter superscript:";
cin>>superscript;

cout<<"enter degree";
cin>>degree;

int getAnswer=power(superscript,degree);


cout<<getAnswer<<endl;
*/

/*

int degree;

int superscript;
int answer;

cout<<"enter superscript";
cin>>superscript;

cout<<"enter degree";
cin>>degree;


for(int i=1; i<=degree; i++){

            answer= superscript*=superscript;


}

cout<<answer<<endl;

*/



for(int i = 1; i <= 5; i++){
        if(i%2==0){
            continue;
        }
       for(int j = 5; j > 0; j--){
           if(j==3){
               break;
           }
        for(int k = 1; k <= 5; k++){
            if(k%2==0){
                cout << i << j << k <<endl;
            }
    }
    }
    }




    return 0;
}







/*


int power(int base,int higher){

for(int i=0 , i<=degree,i++;)
    int getAnswer*=superscript

    return getAnswer;



}
*/
