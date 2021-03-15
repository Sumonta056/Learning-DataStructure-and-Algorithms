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


#define F(i,s,e) for(ll i=s;i<e;++i)
#define ll long long
#define pb push_back
using vll = vector<ll>;
#define P(str) cout << str << endl
#define endl '\n'
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)  
   
const int N = int(1e5 + 3);

void merge( int arr[], int l ,int m  , int r)
{
    int left_index = l ;
    int right_index = m+1 ;

    int new_index = l ;
    int new_arr[100] ;

    while( left_index<=m && right_index<=r)
    {
        if(arr[left_index] <= arr[right_index])
        {
            new_arr[new_index] = arr[left_index];

            new_index++;
            left_index++;
        }

        else
        {
            new_arr[new_index] = arr[right_index];

            new_index++;
            right_index++;

        }
    }


    while ( left_index<=m )
    {
         new_arr[new_index] = arr[left_index];

            new_index++;
            left_index++;
    }

      while ( right_index<=r )
    {
         new_arr[new_index] = arr[right_index];

            new_index++;
            right_index++;
    }

    for( int i = l ; i<=r ; i++)
    {
        arr[i] = new_arr[i];
    }

}


void merge_sort( int arr[] , int left , int right)
{
    if( left < right)
    {
        int mid = ( left + right) / 2 ;

        merge_sort( arr , left , mid);
        merge_sort( arr , mid+1 , right);

        merge( arr , left , mid ,right);
    }
}
int main()
{ 
    fast;

   int size; 
   cin>>size ;

   int arr[100];
   
   for(int i = 0 ; i < size ; i++)
   {
       cin>>arr[i] ;
   }

   merge_sort ( arr , 0 , size - 1) ;

   for( int i = 0; i<size ; i++)
    {
        
        cout<<arr[i]<<" ";
    }

    

    

}