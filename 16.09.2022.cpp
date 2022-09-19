#include <iostream>
using namespace std;

/*int main(){
    int x;
    cout<<"Ievadi skaitli"<<endl;
    cin>>x;

    if (x>9 and x<21) {
        cout<<"Paldies"<<endl;
    } else{
    cout<<"Nepareizi"<<endl;
    }}
*/

int main(){
    int x, y, z;
    cout<<"Ievadi trijstura malu garumus"<<endl;
    cin>>x>>y>>z;

    if (x + y <= z || x + z <= y || y + z  <= x) {
        cout<<"neeksiste"<<endl;
    } else{
    cout<<"eksiste"<<endl;
    }}
