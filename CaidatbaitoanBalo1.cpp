#include <iostream>

using namespace std;
void creArr(int n, int *a);
void findMax(int n, int *a, int w);
int main()
{
int n, w;
cin >>n>> w;
int *a=new int[n];
creArr(n,a);
findMax(n,a,w);
delete[] a;
return 0;
}
void creArr(int n, int *a){
    for(int i=0;i<n;++i)
    cin>>*(a+i);
}
void findMax(int n, int *a, int w){
int max1=0, sum, x, y;
for(int i=0;i<n-1;++i)
for(int j=i+1;j<n;++j){
    sum=*(a+i) + *(a+j);
    if(sum>w) continue;
    if(sum<max1) continue;
    max1=sum;
    x=i;
    y=j;
}
cout<<max1<<endl<<x<<" "<<y;
}
