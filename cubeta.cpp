#include <bits/stdc++.h>
using namespace std;
int a[7];
int main()
{
    cout<<"Autor: Avril tapia";
    int n,x;
    cin>>n;
    ///LEER DATOS EN LA CUBETA
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        a[x]++;
    }
    ///IMPRIMIR CUÁNTOS HAY EN CADA SEMESTRE
    cout<<"Semestre 1: "<<a[1]<<endl;
    cout<<"Semestre 2: "<<a[2]<<endl;
    cout<<"Semestre 3: "<<a[3]<<endl;
    cout<<"Semestre 4: "<<a[4]<<endl;
    cout<<"Semestre 5: "<<a[5]<<endl;
    cout<<"Semestre 6: "<<a[6]<<endl;

    return 0;
}
