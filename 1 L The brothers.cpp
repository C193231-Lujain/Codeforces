#include<iostream>
#include<cstring>
using namespace std;
int main()
{string F1,S1,F2,S2;
int ans;
cin>>F1>>S1;
cin>>F2>>S2;
ans=S1.compare(S2);
if(ans==0)
    cout<<"ARE Brothers";
else
    cout<<"NOT";
return 0;
}

