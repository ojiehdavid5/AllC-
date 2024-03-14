#include <iostream>
#include <cmath>

using namespace std;

//int Area(int inner,int outer);

int main()
{

/*
int innerRadius;
int outerRadius;
int areaOfAnnulus;


cout<<"enter the inner radius:";
cin>>innerRadius;
cout<<"enter the outer radius:";
cin>>outerRadius;




 areaOfAnnulus=Area(  innerRadius, outerRadius);


cout<<areaOfAnnulus<<endl;






*/






             /*

             int fee;





             cout<<"Enter tutition fee:";
             cin>>fee;



              int lateFee=fee+(0.1*fee);

              cout<<lateFee<<endl;
*/


/*

int futureAccumulate;
int years;
int rate;
int principal;



cout<<"enter number of years to accumulate interest:";
cin>>rate;
cout<<"enter amount deposited:";
cin>>principal;
cout<<"enter  interest rate per year:";
cin>>years;

int I= rate/100;


 futureAccumulate= principal*(1+I)*years;


 cout<<futureAccumulate<<endl;

 */
/*

int sumOdd;
int sumEven;
int absDiff;



for(int i=1; i<150; i++){

    if(i%2==0){

        //cout<<i<<endl;

        sumEven+=i;
    }else{
    sumOdd+=i;

    }








}





       // cout<<sumEven<<endl;


       // cout<<sumOdd<<endl;

       absDiff=sumOdd-sumEven;



        cout<<absDiff<<endl;


*/


/*

int i=0;

 while( i<1){
    cout<<"/";
}*/

/*


int mystery=1;
 mystery=1-2*mystery;
 mystery=mystery+1;

cout<<mystery<<endl;

*/



/*
int a,b;


cout<<"enter a  large number";
cin>>a;
cout<<"enter a  large number";
cin>>b;





if(a>b){

    cout<<"a:"<<b<<endl;
    cout<<"b:"<<a<<endl;


}else{

cout<<"a:"<<b<<endl;
cout<<"b:"<<a<<endl;


}
*/



/*


unsigned short int myAge = 5, yourAge = 10;
// a pointer
unsigned short int * pAge = &myAge;
cout << "myAge:\t" << myAge << "\t\tyourAge:\t" << yourAge << endl;
cout << "&myAge:\t" << &myAge << "\t&yourAge:\t" << &yourAge << endl;
cout << "pAge:\t" << pAge << endl;
cout << "*pAge:\t" << *pAge << endl;
cout << "\nReassigning: pAge = &yourAge..." << endl << endl;
pAge = &yourAge; // reassign the pointer
cout << "myAge:\t" << myAge <<"\t\tyourAge:\t" << yourAge << endl;
cout << "&myAge:\t" << &myAge << "\t&yourAge:\t" << &yourAge << endl;
cout << "pAge:\t" << pAge << endl;
cout << "*pAge:\t" << *pAge << endl;
cout << "\n&pAge:\t" << &pAge << endl;
*/

/*

int age;
cout<< "Enter your age: ";

//get age from the user
scanf("%d", &age);
//print the age
cout << "Age = " << age;

*/

/*


switch (i<2)
{
	case 0: 	cout<<"chuks";
			break;
	case 1: 	statement;
			break;
	....
	case 2: 	statement;
			break;
	default: 		statement;
}
*/

/*


for(int i=1; i<=5; i++){

    if(i%2==0){
cout<<i<<endl;
        continue;
    }for(int j=5; j>0; j--){

    if(j==3){
        break;
    }for(int k=1; k<=5; k++){
        if(k%2==0){


            cout<<i<<""<<j<<""<<k<<endl;
        }

    }

    }
}
*/

/*
int sum = 0;
for( int index = 1; index <= 10; index++ )
sum += index;
  cout<<sum<<endl;
  */


/*

  int counter = 0; // initialize the condition
	while(counter < 5) // test condition still true
	{
		counter++; // body of the loop
		cout << "counter: " << counter << endl;
	}
	cout << "Complete. Counter: " << counter << endl;
 */

 /*

 int counter = 0;
	while (true) {
		counter ++;
if (counter > 10)
			break;
	}
	cout << "Counter: " << counter << endl;

	*/



	int  factorial;
	int userInput;


	cout<<"enter a postive integer:";
	cin>>userInput;


	for(int i=0; i>=userInput; i-- ){

        factorial*=i;


	}
	cout<<factorial<<endl;


    return 0;




}


 //int Area(int r1,int r2){

   //// return 3.142*r1*2+r2*2;


//}//




