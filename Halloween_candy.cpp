#include<bits/stdc++.h>
using namespace std;

int speedOfEatingCandy(int n, vector<int> candy, int hour) {
    int low = 1;
    int high = *max_element(candy.begin(), candy.end());
    int cSpeed;

    while(low <= high){
        int mid = (low + high)/2;

        int reqHour = 0;
        for(int i=0; i<n; i++){
            reqHour = candy[i]/mid + (candy[i] % mid != 0);
        }

        if(reqHour > hour){
            low = mid+1;
        } 
        else{
            cSpeed = mid;
            high = mid-1;
        }
    }

    return cSpeed;
}

int main() {
    int N, Hours;
    cin >> N;
    vector<int> candyPiles(N);
    for(int i=0; i<N; i++){
        cin >> candyPiles[i];
    }
    cin >> Hours;

    cout << speedOfEatingCandy(N, candyPiles, Hours);

    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

int solve(int n, vector<int>candy, int h)
{
    int low=1;
    int high=*max_element(candy.begin(),candy.end());
    
    int c;
    
    while(low<=high)
    {
        int mid=(low+high)/2;
        int rh=0;
        
        for(int i=0;i<n;i++)
        {
            rh+= candy[i]/mid + (candy[i]%mid!=0);
        }
        
        if(rh>h)
        {
            low=mid+1;
        }
        else // valid ans
        {
            c=mid;
            high=mid-1; // in search of lesser c value;
        }
    }
    
    return c;
}

int main()
{
    int n;
    cin>>n;
    vector<int>candy(n);
    for(int i=0;i<n;i++)cin>>candy[i];
    int h;
    cin>>h;
    
    cout<<solve(n,candy,h);
    return 0;
}
*/