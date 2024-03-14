#include <iostream>

using namespace std;

int main()
{

int degree;

int superscript;

cout<<"enter superscript";
cin>>superscript;

cout<<"enter degree";
cin>>degree;


for(int i=0 ; i<=degree; i++){

            superscript*=superscript;


}

cout<<superscript<<endl;







    return 0;
}
