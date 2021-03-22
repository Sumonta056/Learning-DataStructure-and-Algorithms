//        ** Sumonta Saha Mridul **                                    SWE - SUST 
/*     

         ######    ##     ##  ##     ##   #######   ##    ##   ########      ###
        ##    ##   ##     ##  ###   ###  ##     ##  ###   ##      ##        ## ##
        ##         ##     ##  #### ####  ##     ##  ####  ##      ##       ##   ##
         ######    ##     ##  ## ### ##  ##     ##  ## ## ##      ##      ##     ##
              ##   ##     ##  ##     ##  ##     ##  ##  ####      ##      #########
        ##    ##   ##     ##  ##     ##  ##     ##  ##   ###      ##      ##     ##
         ######     #######   ##     ##   #######   ##    ##      ##      ##     ##

*/
#include <bits/stdc++.h>
using namespace std;

#define ll          long long
#define ull         unsigned long long
#define pb          push_back
#define pii         pair<int,int>
#define pll         pair<long,long>
#define mp(a,b)     make_pair(a,b)
#define vi          vector<int>
#define vll         vector<ll>
#define vii         vector<pii>
#define Mi          map<int,int>
#define mii         map<pii,int>
#define all(a)      (a).begin(),(a).end()
#define f           first
#define s           second
#define lb          lower_bound
#define ub          upper_bound
#define sz(x)       (int)x.size()
#define endl         '\n'

#define F(i,s,e)    for(ll i=s;i<e;++i)
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define rem(i,a,b)  for(int i=a;i>b;i--)
#define P(str) cout << str << endl

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)  


#define mod   1000000007
#define INF   numeric_limits<ll>::max();
#define NINF  numeric_limits<ll>::min();
const int N = int(1e5 + 3);


int main()
{ 
    fast;

    // *sieve of eratosthenes

    //* print all the prime from 1 to n

    int n;
    cin >> n ;


    bool arr[n+1] ;
    memset(arr, true, sizeof(arr));

    //* create a bool array and declare all its value true

    arr[0]=false;
    arr[1]=false;
    
    //* as 0 , 1 are not prime declare as false first

    //* create a loop 2 to root n
    // * ( i * i)
    for( int i = 2; i * i <= n ; i++)
    {
      //* if true then it is prime
      //* our next job is to false those which are multiple of its
      if(arr[i] == true)
      {
          //* for avoiding tle we will start from 
          //*  5 x 5
          //* 5 x 6
          //* we will not start from  5  x 2
          //*  it was already taken while 2  
          for(int j = i ; j <= n ; j++)
          {
              arr[i*j]=false;
          }
      }
    }

    for (int p = 2; p <= n; p++)
    {
        if (arr[p] == true)
            cout << p << " ";
    }
}
   

