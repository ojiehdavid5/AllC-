#include <iostream>
#include <cmath>
using namespace std;

int main()
{


int studentGrade;
int averageGrade;

    for( int i=0; i<=10; i++){

        cout<<"enter grade"<<endl;
        cin>>studentGrade;

        studentGrade*=studentGrade;
            averageGrade=studentGrade/10;

    }


    cout<<averageGrade<<endl;








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

       absDiff=abs(sumOdd-sumEven);



        cout<<absDiff<<endl;

*/



/*

int SomeArray[2][5] = { {0,1,2,3,4}, {0,2,4,6,8}};
 for (int i = 0; i<2; i++)
 {
 for (int j=0; j<5; j++)
 {
 cout << SomeArray[i][j]<< endl;
 }
 }


*/


/*
bool s;

while (!cin.eof( )) {
     cin >> s;
     cout << s << endl;
}


*/
    return 0;
}
