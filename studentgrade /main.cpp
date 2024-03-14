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

        studentGrade+=studentGrade;
    }

    averageGrade=studentGrade/10;

    cout<<averageGrade<<endl;



    return 0;
}
