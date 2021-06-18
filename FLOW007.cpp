#include <iostream>
using namespace std;

int main() {
    int n,i,rev,rem;
    long int a[1000];
    cin>>n;
    for(i=0;i<n;i++)
    {  
        cin>>a[i];
        rev=0;
        rem=0;
        while(a[i]!=0)
        {
            rem=a[i]%10;
            rev=rev*10+rem;
            a[i]=a[i]/10;
        }
        cout<<rev<<endl;
    }
	return 0;
}
