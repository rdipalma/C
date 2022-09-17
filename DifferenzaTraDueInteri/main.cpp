#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int a,b,c,resto;
    cout<<"digita il dividendo"<<endl;
    cin>>a;
    cout<<"digita il divisore"<<endl;
    cin>>b;
    cout<<"eseguo la divisione"<<endl;
    if (b!=0) {
        c=a/b;
        resto=a-c*b;
        cout<<"ecco il quoziente:"<<endl<<c<<endl;
        cout<<"ecco il resto"<<endl<<resto<<endl;
    }
    else cout<<"non posso dividere";
    system("pause");
    return 0;
}
