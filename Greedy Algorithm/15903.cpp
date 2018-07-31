#include <cstdio>
#include <algorithm>
using namespace std;
#define MAXX_N 1000
typedef long long ll;

ll n,m,arr[MAXX_N+1];

int main(){
    scanf("%lld%lld",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    while(m--){
        sort(arr,arr+n);
        ll tmp=arr[0]+arr[1];
        arr[0]=tmp;
        arr[1]=tmp;
    }
    ll ans=0;
    for(int i=0;i<n;i++){
        ans+=arr[i];
    }
    printf("%lld\n",ans);
}
