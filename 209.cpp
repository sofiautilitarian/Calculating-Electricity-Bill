#include<bits/stdc++.h>
using namespace std;
int main ( )
{

    float n=0, avg=0,total=0;
    cin>>n;
    if (n>0 && n<=50){
        total=n*3.50+105;
    }
    else if (n>50 && n<=75){
        total=n*4.00+105;
    }
    else if (n>75 && n<=200){
        total=75*4.00+(n-75)*5.45+105;
    }
    else if (n>200 && n<=300){
        total=75*4.00+125*5.45+(n-200)*5.70+105;
    }
    else if (n>300 && n<=400){
        total=75*4.00+125*5.45+100*5.70+(n-300)*6.02+105;
    }
    else if (n>400 && n<=600){
        total=75*4.00+125*5.45+100*5.70+100*6.02+(n-400)*9.30+105;
    }
    else if (n>600){
        total=75*4.00+125*5.45+100*5.70+100*6.02+200*9.30+(n-600)*10.70+105;
    }
    cout<<total<<"\n";
    printf("%.3f tk/unit",total/n);
    printf("\n");
    return 0;
}

